-- lua/baml_syntax/init.lua
local M = {}

-- Default configuration
M.config = {
    format_on_save = false,
    format_command = "baml-cli fmt",
}

-- Function to format BAML file
function M.format_baml(file_path)
    file_path = file_path or vim.fn.expand('%:p')
    
    -- Create temporary file for output
    local tmp_file = vim.fn.tempname()
    
    -- Run formatter command
    local cmd = string.format("%s --dry-run %s > %s", M.config.format_command, vim.fn.shellescape(file_path), tmp_file)
    local exit_code = os.execute(cmd)
    
    if exit_code ~= 0 then
        vim.api.nvim_err_writeln("Error formatting BAML file")
        return false
    end
    
    -- Read formatted content
    local formatted_content = {}
    local file = io.open(tmp_file, "r")
    if file then
        for line in file:lines() do
            table.insert(formatted_content, line)
        end
        file:close()
    else
        vim.api.nvim_err_writeln("Error reading formatted output")
        return false
    end
    
    -- Update buffer with formatted content
    vim.api.nvim_buf_set_lines(0, 0, -1, false, formatted_content)
    
    -- Clean up temporary file
    os.remove(tmp_file)
    return true
end

-- Setup function for user configuration
function M.setup(opts)
    M.config = vim.tbl_deep_extend("force", M.config, opts or {})
    
    -- Register Tree-sitter parser
    local parser_config = require("nvim-treesitter.parsers").get_parser_configs()
    parser_config.baml = {
        install_info = {
            url = "https://github.com/klepp0/nvim-baml-syntax",
            files = { "parser/src/parser.c" },
            branch = "main",
            generate_requires_npm = false,
            requires_generate_from_grammar = false,
        },
        filetype = "baml",
    }
    
    -- Configure Tree-sitter
    require('nvim-treesitter.configs').setup {
        ensure_installed = { "baml" },
        highlight = {
            enable = true,
            additional_vim_regex_highlighting = false,
        },
    }
    
    -- Add autocmd for format on save
    if M.config.format_on_save then
        vim.api.nvim_create_autocmd("BufWritePre", {
            pattern = "*.baml",
            callback = function()
                M.format_baml()
            end,
        })
    end
    
    -- Create user command for manual formatting
    vim.api.nvim_create_user_command("BamlFormat", function()
        M.format_baml()
    end, {})
end

return M