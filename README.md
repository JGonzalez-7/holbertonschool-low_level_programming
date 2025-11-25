# Low-Level Programming in C

A set of Holberton School projects that build core C skills: compilation, memory management, control flow, and debugging. Each directory contains tasks that exercise a specific concept in the language and standard library.

Overview
--------
This repository gathers foundational C modules that mirror early systems-programming work. It provides practical experience with:

- Using the full C toolchain and common `gcc` flags
- Control flow with conditionals, loops, and recursion
- Pointer arithmetic, arrays, and manual memory management
- Working with `struct`, `typedef`, function pointers, and variadic functions
- Handling command-line arguments and writing small utilities

Purpose
-------
- Strengthen knowledge of C programming fundamentals
- Build intuition for how low-level operations map to compiled code
- Encourage good habits around testing, modular design, and debugging
- Prepare for deeper systems topics like data structures and memory safety

Features
--------
- Modular directories that focus on one concept at a time
- Practice with dynamic allocation, recursion, and pointer-heavy code
- Exposure to standard library headers and common system calls
- Starter `README.md` files in subdirectories to guide each module
- Example build commands using strict warning flags

Intended Audience
-----------------
- Holberton School students learning low-level programming
- New C developers building a foundation in systems concepts
- Anyone exploring how C organizes memory, control flow, and I/O

Project Modules
---------------
| Directory                  | Description                                      |
|----------------------------|--------------------------------------------------|
| hello_world                | First C programs and basic `gcc` usage           |
| variables_if_else_while    | Conditionals and simple loops                    |
| functions_nested_loops     | Reusable functions and nested iteration          |
| pointers_arrays_strings    | Pointer arithmetic, arrays, and string handling  |
| more_functions_nested_loops| Additional loop utilities and function practice  |
| recursion                  | Solving problems with recursive strategies       |
| argc_argv                  | Parsing command-line arguments                   |
| malloc_free                | Dynamic memory allocation fundamentals           |
| more_malloc_free           | Additional allocation patterns and 2D memory     |
| structures_typedef         | Defining structures and using `typedef`          |
| function_pointers          | Callbacks and passing functions as parameters    |
| variadic_functions         | Variable-length argument handling                |

Compilation Instructions
------------------------
Compile inside a module directory using the flags required for Holberton projects:

```sh
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o program
./program [arguments]
```

Language
--------
The code is written entirely in C. Working at this level provides control over memory, execution flow, and the standard library interfaces that higher-level languages build upon. Each module is designed to deepen comfort with these mechanics through small, focused exercises.

Recommended Practices
---------------------
- Compile early and often with all warnings enabled
- Test with varied inputs; use tools like `valgrind` when checking memory
- Keep functions small and document contracts in headers
- Prefer readable naming and consistent style to simplify debugging

**Joshua Gonzalez:** [GitHub Profile](https://github.com/JGonzalez-7)
[LinkedIn Profile](https://www.linkedin.com/in/joshua-gonzalez-398b73267/)

Hello, I’m Joshua Gonzalez, the developer of this project. Feel free to explore my work and connect with me on LinkedIn. I’m excited about the possibility of collaborating and exchanging ideas with you.
