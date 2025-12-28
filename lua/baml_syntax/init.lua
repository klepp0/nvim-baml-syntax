-- lua/baml_syntax/init.lua
local M = {}

-- Default configuration
M.config = {
  format_on_save = false,
  baml_cli_path = "baml-cli", -- Default assumes baml-cli is on PATH
}

-- Helper function to ensure temporary files are removed
local function cleanup_files(files)
  -- ... (cleanup_files function remains the same as before) ...
  for _, file in ipairs(files) do
    if file and vim.fn.filereadable(file) == 1 then
      local ok, err = pcall(os.remove, file)
      if not ok then
        vim.api.nvim_err_writeln("Error removing temporary file " .. file .. ": " .. tostring(err))
      end
    end
  end
end


-- Function to format BAML file
function M.format_baml(file_path)
  -- ... (format_baml function remains the same as before) ...
  file_path = file_path or vim.fn.expand('%:p')
  local bufnr = vim.api.nvim_get_current_buf()

  local tmp_input = vim.fn.tempname()
  local tmp_output = vim.fn.tempname()
  local tmp_error = vim.fn.tempname()

  vim.defer_fn(function()
    cleanup_files({ tmp_input, tmp_output, tmp_error })
  end, 0)

  local ok, result = pcall(function()
    local buffer_content = vim.api.nvim_buf_get_lines(bufnr, 0, -1, false)
    local input_file = io.open(tmp_input, "w")
    if not input_file then
      error("Error creating temporary input file: " .. tmp_input)
    end
    for _, line in ipairs(buffer_content) do
      input_file:write(line .. "\n")
    end
    input_file:close()

    local cmd_fmt = "%s fmt -n %s > %s 2> %s"
    local cmd = string.format(cmd_fmt,
      M.config.baml_cli_path,
      vim.fn.shellescape(tmp_input),
      vim.fn.shellescape(tmp_output),
      vim.fn.shellescape(tmp_error)
    )

    local exit_code = os.execute(cmd)

    local error_content = ""
    local error_file = io.open(tmp_error, "r")
    if error_file then
      error_content = error_file:read("*a") or ""
      error_file:close()
    end

    if exit_code ~= 0 then
      if error_content ~= "" then
        error("Error formatting BAML file:\n" .. error_content)
      else
        error("Error formatting BAML file (exit code: " .. exit_code .. ")")
      end
    end

    local formatted_content = {}
    local output_file = io.open(tmp_output, "r")
    if not output_file then
      error("Error reading formatted output from " .. tmp_output)
    end
    for line in output_file:lines() do
      table.insert(formatted_content, line)
    end
    output_file:close()

    if not vim.api.nvim_buf_is_valid(bufnr) then
        error("Buffer became invalid during formatting.")
    end

    local cursor_pos = vim.api.nvim_win_get_cursor(0)
    vim.api.nvim_buf_set_lines(bufnr, 0, -1, false, formatted_content)
    pcall(vim.api.nvim_win_set_cursor, 0, cursor_pos)

    vim.api.nvim_echo({ { "BAML file formatted successfully", "InfoMsg" } }, false, {})
    return true
  end)

  if not ok then
    vim.api.nvim_err_writeln("BAML Formatting Failed: " .. tostring(result))
    return false
  end

  return result
end


-- Setup function for user configuration
function M.setup(opts)
  M.config = vim.tbl_deep_extend("force", M.config, opts or {})

  -- Check if baml-cli exists if formatting is enabled
  if M.config.format_on_save then
     -- ... (baml-cli check remains the same) ...
    if vim.fn.executable(M.config.baml_cli_path) ~= 1 then
      vim.api.nvim_err_writeln(
        string.format("baml-cli not found at '%s'. Formatting on save disabled.", M.config.baml_cli_path)
      )
      M.config.format_on_save = false -- Disable if CLI not found
    end
  end


  -- === IMPORTANT CHANGE FOR LOCAL DEVELOPMENT ===
  -- Define the parser install info
  local baml_parser_install_info = {
      url = "https://github.com/klepp0/nvim-baml-syntax", -- Default remote URL
      files = { "src/parser.c" }, -- Relative to the root of the fetched repo/dir
      branch = "main",
      generate_requires_npm = false,
      requires_generate_from_grammar = false,
  }

  -- Check if we are likely running in local development mode (adjust path if needed)
  -- This checks if the directory specified in your lazy config exists.
  local local_dev_path = vim.fn.expand('~/dev/nvim-baml-syntax')
  if vim.fn.isdirectory(local_dev_path) == 1 then
      -- If developing locally, override install_info to use local paths
      baml_parser_install_info.url = local_dev_path -- Point to local directory
      -- files path is relative to the url, so it should still work if src/parser.c exists
      vim.notify("Using local BAML parser source from: " .. local_dev_path, vim.log.levels.INFO)
  end
  -- =============================================

  -- Register Tree-sitter parser using the potentially modified install_info
  pcall(function()
    local parser_config = require("nvim-treesitter.parsers").get_parser_configs()
    parser_config.baml = {
      install_info = baml_parser_install_info, -- Use the configured install info
      filetype = "baml",
    }
  end)

  -- Configure Tree-sitter highlighting
  -- It's often better to manage ensure_installed in your main nvim-treesitter config
  -- Ensure this runs *after* the parser_config is updated above
  pcall(function()
      local ts_configs = require('nvim-treesitter.configs')
      if ts_configs then
          ts_configs.setup {
            -- You might manage ensure_installed globally, but ensure 'baml' is included
            -- ensure_installed = { "baml" },
            highlight = {
              enable = true,
              additional_vim_regex_highlighting = false,
            },
            -- indent = { enable = true }
          }
      end
  end)


  -- Add autocmd for format on save
  if M.config.format_on_save then
    -- ... (autocmd setup remains the same) ...
    local group = vim.api.nvim_create_augroup("BamlFormatOnSave", { clear = true })
    vim.api.nvim_create_autocmd("BufWritePre", {
      pattern = "*.baml",
      callback = function(args)
        if vim.bo[args.buf].readonly or vim.bo[args.buf].buftype ~= "" then
           return
        end
        M.format_baml(args.file)
      end,
      group = group,
    })
  end

  -- Create user command for manual formatting
  vim.api.nvim_create_user_command("BamlFormat", function()
    M.format_baml()
  end, { desc = "Format the current BAML file" })

  vim.notify("nvim-baml-syntax setup complete.", vim.log.levels.INFO)

end

return M
