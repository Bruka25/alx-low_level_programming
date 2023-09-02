# Variables, If-Else Statements, and While Loops in C

Welcome to the guide on using variables, conditional statements (if-else), and while loops in the C programming language. These fundamental concepts are crucial for developing C programs.

## Table of Contents

- [Introduction](#introduction)
- [Variables](#variables)
- [Conditional Statements (if-else)](#conditional-statements-if-else)
- [While Loops](#while-loops)
- [Contributing](#contributing)
- [License](#license)

## Introduction

C is a powerful programming language known for its efficiency and control over hardware. Understanding how to work with variables, conditional statements, and loops is essential for any C programmer.

## Variables

### Declaration and Initialization

In C, variables are used to store data. Here's how you declare and initialize variables:

```c
#include <stdio.h>

int main() {
    // Declaration and initialization
    int age = 25;
    float price = 19.99;
    char grade = 'A';

    return 0;
}

Data Types
C supports various data types, including:

int: Integer
float: Floating-point
char: Character
double: Double-precision floating-point
and more...
Choose the appropriate data type based on your data's nature and size.

Conditional Statements (if-else)
If Statement
Conditional statements allow you to make decisions in your code. Here's how to use the 'if' statement:
```c
#include <stdio.h>

int main() {
    int age = 18;

    if (age >= 18) {
        printf("You are an adult.\n");
    }

    return 0;
}
```

If-Else Statement
You can use 'if-else' statements for branching logic:

```c
#include <stdio.h>

int main() {
    int age = 15;

    if (age >= 18) {
        printf("You are an adult.\n");
    } else {
        printf("You are not yet an adult.\n");
    }

    return 0;
}
```
While Loops
Basic While Loop
A 'while' loop allows you to execute a block of code repeatedly as long as a condition is true:

```c
#include <stdio.h>

int main() {
    int count = 0;

    while (count < 5) {
        printf("Count: %d\n", count);
        count++;
    }

    return 0;
}
```

Contributing
If you'd like to contribute to this guide, feel free to enhance the explanations, add examples, or correct errors. To contribute:

Fork this repository.

Create a new branch for your contribution:

```bash
git checkout -b feature/my-feature
```
Make your changes.

Test your changes to ensure accuracy.

Create a pull request with a clear description of your contribution.

License
This guide is open-source and available under the MIT License. See the LICENSE.md file for details.

Happy coding!


This README covers the basics of working with variables, if-else statements, and while loops in C. It's designed to help beginners understand these fundamental concepts in the C programming language.


















