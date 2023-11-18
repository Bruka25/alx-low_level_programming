The following programs are for ALX 0x18-dynamic_libraries project, inside it contains the following dynamic libraries and bash scripts:

* A dynamic library libdynamic.so containing all the functions listed below:
```
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
```
* A script that creates a dynamic library called liball.so from all the .c files that are in the current directory
* A dynamic library that contains C functions that can be called from Python
* A code injection with Giga Millions and chose these numbers: 9, 8, 10, 24, 75 + 9. If you could run two commands on the same server where the Giga Millions program runs, could you make me win the Jackpot?, and with the below documentation
```
/* Giga Millions program                                                                                    
  * Players may pick six numbers from two separate pools of numbers:                                                
  * - five different numbers from 1 to 75 and                                                                       
  * - one number from 1 to 15                                                                                       
  * You win the jackpot by matching all six winning numbers in a drawing.                                           
  * Your chances to win the jackpot is 1 in 258,890,850                                                             
  *                                                                                                                 
  * usage: ./gm n1 n2 n3 n4 n5 bonus
```

C Dynamic Libraries Guide
Overview
This guide introduces dynamic libraries in C programming, explaining their purpose, creation, usage, and benefits. Understanding dynamic libraries is essential for creating reusable code modules and enhancing program modularity.

Table of Contents
Introduction to Dynamic Libraries
Creating Dynamic Libraries
Using Dynamic Libraries
Repository Setup
Compilation Process
Examples
Conclusion

Introduction to Dynamic Libraries
Dynamic libraries, also known as shared libraries, contain reusable code that can be loaded into a program at runtime. They allow multiple programs to share the same code, reducing redundancy and enhancing maintainability.

Creating Dynamic Libraries
1. Compilation
Compile the source code into a shared object file (.so) using the -shared flag.

```
gcc -shared -o my_library.so my_library.c
```

2. Exporting Functions
Define functions and symbols to be exported in the library header file (.h).
Using Dynamic Libraries
1. Linking
Link the dynamic library while compiling the program using the -l flag.

```
gcc -o my_program my_program.c -L/path/to/library -lmy_library
```

2. Loading at Runtime
Use dynamic linking functions (dlopen, dlsym, dlclose) to load the library and access its functions at runtime.
Repository Setup
To start working with dynamic libraries in C:

Clone the Repository: Clone this repository to your local machine using the command:

```
git clone https://github.com/Bruka25/alx-low_level_programming
cd 0x18-dynamic_libraries
```
Navigate to the Directory: Enter the directory containing the source code.

Compilation Process
For compiling C code using dynamic libraries:

Compile the Library: Compile the dynamic library using the -shared flag.
Compile the Program: Link the dynamic library while compiling the main program.
Examples
Example 1: Creating a Dynamic Library

```
// my_library.h
#ifndef MY_LIBRARY_H
#define MY_LIBRARY_H

void my_function();

#endif

```

```
// my_library.c
#include <stdio.h>
#include "my_library.h"

void my_function() {
    printf("This is a function from the dynamic library.\n");
}
```

Example 2: Using the Dynamic Library

```
// my_program.c
#include <stdio.h>
#include <dlfcn.h>
#include "my_library.h"

int main() {
    void *handle = dlopen("./my_library.so", RTLD_LAZY);
    if (handle) {
        void (*my_function_ptr)() = dlsym(handle, "my_function");
        if (my_function_ptr) {
            my_function_ptr();
        }
        dlclose(handle);
    }
    return 0;
}
```

Conclusion
Dynamic libraries in C offer a powerful mechanism for code reuse and program modularity. Mastering their creation and usage enables developers to build scalable and maintainable software.

This README.md file serves as a guide to understanding and utilizing dynamic libraries in C programming, covering creation, usage, setup, compilation processes, and example code snippets. Customize or expand upon this document to meet your project's specific needs.

