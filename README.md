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
   dependencies = {
   "nvim-treesitter/nvim-treesitter"
   },
   config = function()
   -- Optionally load Lua config if you have one:
   -- require("baml_syntax")

       require("nvim-treesitter.configs").setup({
         ensure_installed = { "baml" },
         highlight = {
           enable = true,
         },
       })

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
       -- Optionally load Lua config if you have one:
       -- require("baml_syntax")

       require("nvim-treesitter.configs").setup({
         ensure_installed = { "baml" },
         highlight = {
           enable = true,
         },
       })
     end
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
   require'nvim-treesitter.configs'.setup {
   ensure_installed = {"baml"},
   highlight = {
   enable = true,
   additional_vim_regex_highlighting = false,
   },
   }
   EOF
   ```

4. Open a `.baml` file and ensure the syntax highlighting is active.

> [!NOTE]
> If you have manually set up filetype detection and syntax highlighting files (`ftdetect/baml.vim`, `syntax/baml.vim`, etc.), they will be included and applied automatically once the plugin is installed. If you have a Lua configuration file (e.g., `lua/baml_syntax/init.lua`) for additional customization, uncomment the `require("baml_syntax")` line in the plugin configuration section.

### Tree-sitter Integration (Optional)

To enable Tree-sitter:

1. Ensure you have [nvim-treesitter](https://github.com/nvim-treesitter/nvim-treesitter) installed.
2. Install the Tree-sitter parser:
   ```lua
   require'nvim-treesitter.configs'.setup {
     ensure_installed = {"baml"},
     highlight = {
       enable = true,
       additional_vim_regex_highlighting = false,
     },
   }
   ```

## Usage

Open any `.baml` file in Neovim to see syntax highlighting in action.

## Contributing

[Contributions](CONTRIBUTING.md) are welcome! Please open an issue or submit a pull request.

## License

[MIT](LICENSE)
