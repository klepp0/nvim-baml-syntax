-- lua/baml_syntax/init.lua

require 'nvim-treesitter.parsers'.get_parser_configs().baml = {
    install_info = {
        url = "https://github.com/klepp0/nvim-baml-syntax",
        files = { "parser/src/parser.c" },
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
