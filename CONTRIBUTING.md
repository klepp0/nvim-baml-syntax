# Contributing to Neovim BAML Syntax

Thank you for your interest in contributing! Please follow these guidelines:

## Reporting Issues

- Check if the issue already exists.
- Provide clear and concise information.

## Development Setup

To maintain consistent formatting (e.g., for Lua files), this project uses `pre-commit` hooks. Please set them up locally:

- **Install pre-commit**: `pip install pre-commit`
- **Activate hooks**: Run `pre-commit install` in the project root.

The hooks will automatically format your code when you commit. You can also run them manually using `pre-commit run --all-files`.

## Submitting Pull Requests

- Fork the repository.
- Create a new branch for your feature or bugfix.
- Ensure your code follows the project's coding standards and passes the pre-commit checks.
- Write clear commit messages.
- Submit a pull request with a detailed description.
