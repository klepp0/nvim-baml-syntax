-- lua/baml_syntax/init.lua
local parser_config = require "nvim-treesitter.parsers".get_parser_configs()
parser_config.baml = {
    install_info = {
        url = "https://github.com/klepp0/nvim-baml-syntax",
        files = { "parser/src/parser.c" },
        -- optional entries:
        branch = "main",
        generate_requires_npm = false,          -- if stand-alone parser without npm dependencies
        requires_generate_from_grammar = false, -- if folder contains pre-generated src/parser.c
    },
    filetype = "baml",
}

require 'nvim-treesitter.configs'.setup {
    ensure_installed = { "baml" },
    highlight = {
        enable = true,
        additional_vim_regex_highlighting = false,
    },
}
