-- lua/baml_syntax/init.lua
local M = {}

-- Default configuration
M.config = {
	format_on_save = false,
	baml_cli_path = "baml-cli", -- Default assumes baml-cli is on PATH
}

-- Function to format BAML file
function M.format_baml(file_path)
	file_path = file_path or vim.fn.expand("%:p")

	-- Create temporary files for input, output and error
	local tmp_input = vim.fn.tempname()
	local tmp_output = vim.fn.tempname()
	local tmp_error = vim.fn.tempname()

	-- Get current buffer content and write to temporary input file
	local buffer_content = vim.api.nvim_buf_get_lines(0, 0, -1, false)
	local input_file = io.open(tmp_input, "w")
	if input_file then
		for _, line in ipairs(buffer_content) do
			input_file:write(line .. "\n")
		end
		input_file:close()
	else
		vim.api.nvim_err_writeln("Error creating temporary input file")
		return false
	end

	-- Run baml-cli's format command on the temporary input file in dry run mode
	local cmd = string.format(
		"%s fmt -n %s > %s 2> %s",
		M.config.baml_cli_path,
		vim.fn.shellescape(tmp_input),
		tmp_output,
		tmp_error
	)

	local exit_code = os.execute(cmd)

	-- Read error output if there was an error
	if exit_code ~= 0 then
		local error_content = ""
		local error_file = io.open(tmp_error, "r")

		if error_file then
			error_content = error_file:read("*all")
			error_file:close()
		end

		-- Display the actual error message
		if error_content and error_content ~= "" then
			vim.api.nvim_err_writeln("Error formatting BAML file: " .. error_content)
		else
			vim.api.nvim_err_writeln("Error formatting BAML file (exit code: " .. exit_code .. ")")
		end

		-- Clean up temporary files
		os.remove(tmp_input)
		os.remove(tmp_output)
		os.remove(tmp_error)
		return false
	end

	-- Read formatted content
	local formatted_content = {}
	local output_file = io.open(tmp_output, "r")

	if output_file then
		for line in output_file:lines() do
			table.insert(formatted_content, line)
		end
		output_file:close()
	else
		vim.api.nvim_err_writeln("Error reading formatted output")
		os.remove(tmp_input)
		os.remove(tmp_output)
		os.remove(tmp_error)
		return false
	end

	-- Update buffer with formatted content
	vim.api.nvim_buf_set_lines(0, 0, -1, false, formatted_content)

	-- Clean up temporary files
	os.remove(tmp_input)
	os.remove(tmp_output)
	os.remove(tmp_error)
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
	require("nvim-treesitter.configs").setup({
		ensure_installed = { "baml" },
		highlight = {
			enable = true,
			additional_vim_regex_highlighting = false,
		},
	})

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
