# skeletonpp

**skeletonpp** is a C++ tool for automatically generating customizable and modular project directory structures. It is designed to streamline the setup of new projects or the addition of modules to existing ones. The tool provides a flexible and configurable way to prototype the structure of C++ projects using configurations defined in `.env` files.

---

## Table of Contents

- [Key Features](#key-features)
- [Goals](#goals)
- [Installation](#installation)
- [Usage](#usage)
  - [Generating a Project Skeleton](#1-generating-a-project-skeleton)
  - [Adding New Modules](#2-adding-new-modules)
- [Configuration](#configuration)
  - [Example `.env` File](#example-env-file)
  - [Defining Custom Structures](#defining-custom-structures)
- [Future Enhancements](#future-enhancements)
- [License](#license)
- [Contact](#contact)

---

## Key Features

- **Flexible Project Structures**: Generate a variety of project structures, from simple single-directory setups to complex multi-folder arrangements (e.g., `src`, `include`, `foo/bar`).
- **Modular Design**: Add new folders or modules to an existing project, following the same structural rules defined during the initial setup.
- **Configuration through `.env` Files**: Define and modify project structures using a `.env` file for easy customization.
- **Skeleton Generator**: Create the basic skeleton based on a predefined structure template.
- **Structure Modifier**: Add new directories or modules to the existing project structure while maintaining consistency.
- **Extensible**: Easily extendable to accommodate future enhancements without major changes to the core logic.

## Goals

- **Configurable Structure**: Utilize a `.env` file to define multiple possible directory structures. The configurations allow for both simple and complex directory setups, providing flexibility in how a project is scaffolded.
- **Modular Approach**: The script is designed to be modular:
  - **Initial Generation**: Generate a complete project skeleton (directories and files) based on the selected configuration.
  - **Extension**: Allow for the addition of new directories or modules (e.g., `bar/` folder) to expand the existing project.
- **Ease of Use**: By running the script with different `.env` configurations, you can tailor the structure for specific projects (e.g., basic, `src/include`, nested).
- **Extensibility**: The project should be easily extendable in the future. Additional templates for new types of project structures can be added without requiring major changes to the core script logic.

## Installation

Clone the repository and navigate to the project directory:

```bash
git clone https://github.com/diyorsattarov/skeletonpp.git
cd skeletonpp
```

Make the script executable:
```
chmod +x create_structure
```

## Example Usage
1. **Generate Project Skeleton**
    - The tool will accept a base directory (`.`) and a configuration file (e.g., `structure.env`) to generate the project skeleton.
    - Example: 
    ``` ./create_structure . structure.ev ```
2. **Add new Modules**:
    - The tool will allow adding additional directories/modules after the project has been created.
    - Example:
    ``` ./create_structure . structure.env --add bar ```

## Initial `.env` File Example
```env
STRUCTURE=nested

# Basic structure with a single src/include setup
basic=src:main.cpp, include

# Standard src/include structure
src_include=src:main.cpp, include

# Nested structure for more complex projects
nested=src/foo:foo.cpp,include/foo:foo.hpp
```

## Future Enhancements
- **Customizable File Templates**: Allow the user to specify boilerplate code that should be automatically inserted into the generated files (e.g., `main.cpp` with `void main() {}`)
- **More Predefined Structures**: Add support for additional common C++ project structures (e.g., with test folders, build folders, etc.).
- **Project Type Support**: Extend functionality to support other types of C++ projects (e.g., Boost, OpenCV-based projects).


## License

MIT License

Copyright (c) 2024 Diyor Sattarov (diyorsattarov)

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
