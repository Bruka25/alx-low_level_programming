0x1C Makefiles

Welcome to the "0x1C-makefiles" repository! This repository explores the concept of Makefiles in the context of C programming, providing examples and exercises to help developers understand how Makefiles are used to automate the compilation process and manage complex projects.

Table of Contents

Introduction

Installation

Usage

Contributing

License

Introduction

Makefiles are a build automation tool used primarily for compiling and linking source code files into executable programs or libraries. They contain rules that specify how source files should be compiled and linked, dependencies between source files, and other build-related tasks. Makefiles are especially useful for managing large or complex projects with multiple source files and dependencies. This repository provides examples and exercises to help developers learn how to write and use Makefiles effectively in C programming projects.

Installation

To use the code and examples in this repository, follow these steps:

1. Clone the repository to your local machine:

```
git clone https://github.com/Bruka25/alx-low_level_programming
```

2. Navigate to the repository directory:
```
cd 0x1C-makefiles
```

3. You're ready to explore the Makefile examples and exercises!

Usage

This repository contains examples and exercises related to Makefiles in the context of C programming. To make use of the repository:

1. Navigate to the directory containing the Makefile examples:
```
cd 0x1C-makefiles
```

2. Explore the Makefile examples available in the repository. Each Makefile demonstrates different aspects of automating the compilation process and managing dependencies in C projects.

3. Open a Makefile to view its contents and understand how it works. Pay attention to the rules, targets, dependencies, and commands specified in the Makefile.

4. Study the provided Makefile examples and accompanying explanations to understand how Makefiles are structured and how they can be used to automate the build process in C projects.

5. Experiment with the Makefile examples, modify them as needed, and test different scenarios to deepen your understanding of Makefile syntax and functionality.

6. Feel free to use the provided Makefile examples as templates for creating your own Makefiles for C projects or for learning purposes.

Contributing

Contributions to this repository are welcome! If you have ideas for improving existing Makefile examples, adding new examples, or fixing issues, please feel free to submit a pull request. Before contributing, please review the contribution guidelines.

License

This repository is licensed under the MIT License. See the LICENSE file for details.


The following files are for ALX  0x1C-makefiles project for the lower level programming curriculums, inside it contains the following makefiles:

* Makefile with:

      -> name of the executable: school
      -> rules: all
      -> The all rule builds your executable
      -> variables: none

* makefiles with:

      -> name of the executable: school
      -> rules: all
      -> The all rule builds your executable
      -> variables: CC, SRC
      -> CC: the compiler to be used
      -> SRC: the .c files

* Makefile with:

     -> name of the executable: school
     -> rules: all
            # The all rule builds your executable
     -> variables: CC, SRC, OBJ, NAME
            # CC: the compiler to be used
            # SRC: the .c files
            # OBJ: the .o files
            # NAME: the name of the executable
     -> The all rule should recompile only the updated source files

* Makefile with:

     -> name of the executable: school
     -> rules: all, clean, oclean, fclean, re
            # all: builds your executable
            # clean: deletes all Emacs and Vim temporary files along with the executable
            # oclean: deletes the object files
            # fclean: deletes all Emacs and Vim temporary files, the executable, and the object files
            # re: forces recompilation of all source files
     -> variables: CC, SRC, OBJ, NAME, RM
            # CC: the compiler to be used
            # SRC: the .c files
            # OBJ: the .o files
            # NAME: the name of the executable
            # RM: the program to delete files
     -> The all rule should recompile only the updated source files
     -> The clean, oclean, fclean, re rules should never fail

* A python function def island_perimeter(grid): that returns the perimeter of the island described in grid:
      
      grid is a list of list of integers:
          -> 0 represents a water zone
          -> 1 represents a land zone
          -> One cell is a square with side length 1
          -> Grid cells are connected horizontally/vertically (not diagonally).
          -> Grid is rectangular, width and height don’t exceed 100
      Grid is completely surrounded by water, and there is one island (or nothing).
      The island doesn’t have “lakes” (water inside that isn’t connected to the water around the island).

* Makefile with:

      -> name of the executable: school
      -> rules: all, clean, fclean, oclean, re
             # all: builds your executable
             # clean: deletes all Emacs and Vim temporary files along with the executable
             # oclean: deletes the object files
             # fclean: deletes all Emacs and Vim temporary files, the executable, and the object files
             # re: forces recompilation of all source files
      -> variables: CC, SRC, OBJ, NAME, RM, CFLAGS
             # CC: the compiler to be used
             # SRC: the .c files
             # OBJ: the .o files
             # NAME: the name of the executable
             # RM: the program to delete files
             # CFLAGS: your favorite compiler flags: -Wall -Werror -Wextra -pedantic
      -> The all rule should recompile only the updated source files
      -> The clean, oclean, fclean, re rules should never fail
      -> You are not allowed to have a list of all the .o files
      -> You have to use $(RM) for the cleaning up rules, but you are not allowed to set the RM variable
      -> You are not allowed to use the string $(CC) more than once in your Makefile
      -> You are only allowed to use the string $(RM) twice in your Makefile
      -> You are not allowed to use the string $(CFLAGS) (but the compiler should still use the flags you set in this variable)
      -> You are not allowed to have an $(OBJ) rule
      -> You are not allowed to use the %.o: %.c rule
      -> Your Makefile should work even if there is a file in the folder that has the same name as one of your rule
      -> Your Makefile should not compile if the header file m.h is missing
