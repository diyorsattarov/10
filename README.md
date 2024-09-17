# skeletonpp

**skeletonpp** is a C++ tool for automatically generating customizable and modular project directory structures, designed to streamline the setup of new projects or the addition of modules to existing ones. The tool will provide a flexible and configurable way to prototype the structure of C++ projects, using configurations defined in `.env` files.


## Key Features:
- **Flexible Project Structures**: Generate a variety of project structures, from simple single-directory setups to complex multi-folder arrangements (e.g., src, include, foo/bar).
- **Modular Design**: Add new folders or modules to an existing project, following the same structure rules defined during the initial setup.
- **Configuration through** `.env`: Define and modify project structures using a `.env` file for easy customization.
- **Extensible**:
- **Skeleton Generator**: A function for creating the basic skeleton based on a predefined structure template.
- **Structure Modifier**: A funciton that allows adding new directories or modules to the existing project structure while mainting consistency. 

## Goals
- **Configurable Structure**: The project will use a `.env` file to define multiple possible directory structures. The configurations will allow defining both simple and complex directory setups giving flexibility in how a project is scaffolded. 
- **Modular Approach**: We aim to make the script modular, so it will:
    - First, generate a comple project skeleton (directories and files) based on the selected configuration.
    - Later, allow for the addition of new directories or modules (e.g., bar/ folder) to expand the existing project.
- **Easy of Use**: By running the script with different `.env` configurations, the user can tailor the structure for specific projects (e.g., basic, src/include, nested).
- **Extensibility**: The projhect should be easily extendable in the future. Additional templates for new types of project strcutures can be added wihtout requiring any major changes to the core script logic.
 
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
