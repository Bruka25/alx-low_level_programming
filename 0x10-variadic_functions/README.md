The following programs are for ALX 0x10-variadic_functions assignment, inside it contains the following functions:

* A function that returns the sum of all its parameters
* A function that prints numbers, followed by a new line
* A function that prints strings, followed by a new line
* A function that prints anything

C Variadic Functions Guide
Overview
This guide introduces variadic functions in C programming, which allow the creation of functions with a variable number of arguments. Understanding variadic functions enables the development of flexible and adaptable functions that can handle varying numbers of parameters.

Table of Contents
Introduction to Variadic Functions
Working with Variadic Functions
Repository Setup
Compilation Process
Examples
Conclusion

Introduction to Variadic Functions
Variadic functions in C are functions that can accept a varying number of arguments. They utilize ellipsis (...) in their parameter lists to denote this flexibility. Examples of variadic functions in C include printf and scanf.

Working with Variadic Functions
To work with variadic functions in C:

Standard Header
Include the <stdarg.h> header file, which contains macros and functions to handle variable arguments.

Variadic Function Declaration
Declare the variadic function using an ellipsis (...) after specifying the required parameters.

Variadic Function Implementation
Inside the function body, utilize macros from <stdarg.h>, such as va_list, va_start, va_arg, and va_end, to handle the variable arguments.

Repository Setup
To start working with C variadic functions:

Clone the Repository: Clone this repository to your local machine using the command:

```
git clone https://github.com/Bruka25/alx-low_level_programming
cd 0x10-variadic_functions
```
Navigate to the Directory: Enter the directory containing the source code.

Compilation Process
For compiling C code containing variadic functions:

Compile the Code: Use a C compiler to compile the source code containing variadic functions. For example:

```
gcc gcc -Wall -Werror -Wextra -pedantic -std=c89 source_code.c -o output_executable
```
Run the Executable: Execute the compiled code using:

```
./output_executable
```
Examples
Example 1: Custom Variadic Function

```
#include <stdio.h>
#include <stdarg.h>

void printNumbers(int num, ...) {
    va_list args;
    va_start(args, num);
    for (int i = 0; i < num; ++i) {
        int value = va_arg(args, int);
        printf("%d ", value);
    }
    va_end(args);
    printf("\n");
}

printNumbers(4, 10, 20, 30, 40);
```
Example 2: Using Standard Variadic Functions

```
#include <stdio.h>
#include <stdarg.h>

void displayMessage(const char *format, ...) {
    va_list args;
    va_start(args, format);
    vprintf(format, args);
    va_end(args);
}

displayMessage("Hello, %s! You are %d years old.\n", "John", 25);
```
Conclusion
Variadic functions in C provide flexibility by allowing functions to accept a variable number of arguments. They are powerful tools for creating versatile functions capable of handling different parameter counts.

This README.md file serves as a guide to understanding and working with variadic functions in C, including their importance, setup, compilation processes, and examples. Feel free to modify or expand this document to suit your project's specific requirements. 
