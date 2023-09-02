# Working with Static Libraries in C

Welcome to the "Working with Static Libraries in C" project. This project is designed to help you understand how to create, use, and manage static libraries in the C programming language. Static libraries are collections of precompiled object files that can be linked with your C programs to reuse code and simplify project management.

## Table of Contents

- [Introduction](#introduction)
- [Project Structure](#project-structure)
- [Static Libraries](#static-libraries)
- [Creating a Static Library](#creating-a-static-library)
- [Using a Static Library](#using-a-static-library)
- [Examples](#examples)
- [Usage](#usage)
- [Contributing](#contributing)
- [License](#license)

## Introduction

Static libraries are a crucial component of modular and efficient software development in C. They allow you to encapsulate and reuse code across multiple projects, reducing redundancy and making your codebase more maintainable.

## Project Structure

This project's structure is organized as follows:

- **main.c**: Contains the main program logic.
- **mathlib**: A directory containing source files for the static library.
- **libmath.a**: The compiled static library.
- **Makefile**: Facilitates project compilation and library creation.

## Static Libraries

### Understanding Static Libraries

Static libraries are collections of object files that are linked with your C program at compile time. They provide a way to package and distribute code for reuse. Static libraries have a `.a` file extension.

## Creating a Static Library

### Building a Static Library

You can create a static library using the following commands:

```bash
cd mathlib
gcc -c add.c sub.c  # Compile individual source files into object files
ar rcs libmath.a add.o sub.o  # Create the static library

Using a Static Library
Linking with a Static Library
To use a static library in your C program, you can link it during compilation:
```bash
gcc main.c -L./mathlib -lmath -o myprogram
```
Examples
This project provides examples demonstrating the creation and use of a static library. You'll find source code in the mathlib directory for functions like addition and subtraction, which are then used in the main.c program.

Usage
To make the most of this project for learning about static libraries in C:

Clone the repository to your local machine:
```bash
git clone https://github.com/yourusername/c-static-library-project-name.git
```
Compile the project using the provided Makefile:
```bash
make
```
Run the executable:
```bash
./myprogram
```
Contributing
If you'd like to contribute to this project by adding more examples, improving documentation, or enhancing explanations, please follow these steps:

Fork this repository.

Create a new branch for your contribution:
```bash
git checkout -b feature/my-feature
```
Make your changes, ensuring they align with the project's goals.

Test your changes thoroughly.

Create a pull request with a clear description of your contribution.

License
This project is open-source and available under the MIT License. See the LICENSE.md file for details.

Enjoy working with static libraries in C!









































The following projects are for ALX 0x09 static libraries assignement, The project contains:

* A static library called libmy.a, which contains the following functions:
int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);

* A script called create_static_lib.sh that creates a static library called liball.a from all the .c files that are in the current directory
