# Neovim [BAML](https://github.com/boundaryml/baml) Syntax Highlighting

A Neovim plugin to provide syntax highlighting for `.baml` files.

## Features

- Traditional Vim syntax highlighting.
- Optional Tree-sitter integration for advanced highlighting.
- Filetype detection and indentation settings.

## Installation

### Using [lazy.nvim](https://github.com/folke/lazy.nvim)

1. Add the plugin to your plugin specifications (e.g., `~/.config/nvim/lua/plugins.lua`):

   ```lua
   {
     "klepp0/nvim-baml-syntax",
     dependencies = { "nvim-treesitter/nvim-treesitter" },
     config = function()
       -- This ensures lua/baml_syntax/init.lua is run,
       -- which registers the "baml" parser and configures Tree-sitter:
       require("baml_syntax")
     end,
   }
   ```

2. Run `:Lazy sync` within Neovim to install the plugin.
3. Open a `.baml` file to verify that syntax highlighting and Tree-sitter integration work as expected.

### Using [Packer.nvim](https://github.com/wbthomason/packer.nvim)

1. Add the following to your Packer configuration (e.g., `~/.config/nvim/lua/plugins.lua`):

   ```lua
   use {
     "klepp0/nvim-baml-syntax",
     requires = { "nvim-treesitter/nvim-treesitter" },
     config = function()
       require("baml_syntax")
     end,
   }
   ```

2. Run `:PackerSync` to install.
3. Open a `.baml` file and confirm that highlighting is applied.

### Using [vim-plug](https://github.com/junegunn/vim-plug)

1. Add the plugin lines to your `init.vim` or `~/.config/nvim/init.vim`:

   ```vim
   call plug#begin('~/.local/share/nvim/plugged')
     Plug 'nvim-treesitter/nvim-treesitter', {'do': ':TSUpdate'}
     Plug 'klepp0/nvim-baml-syntax'
   call plug#end()
   ```

2. Restart Neovim and run `:PlugInstall` to install.
3. Optionally configure Tree-sitter highlighting in your init.vim or lua config:

   ```vim
   lua << EOF
   require("baml_syntax")
   EOF
   ```

4. Open a `.baml` file and ensure the syntax highlighting is active.

## Usage

Open any `.baml` file in Neovim to see syntax highlighting in action.

## Contributing

[Contributions](CONTRIBUTING.md) are welcome! Please open an issue or submit a pull request.

## License

[MIT](LICENSE)
