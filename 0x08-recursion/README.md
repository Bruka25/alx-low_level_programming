# Understanding Recursion in C

Welcome to the "Understanding Recursion in C" project. This project is designed to help you learn and master the concept of recursion in the C programming language. Recursion is a powerful technique that allows a function to call itself, often used to solve complex problems by breaking them down into simpler subproblems.

## Table of Contents

- [Introduction](#introduction)
- [Project Structure](#project-structure)
- [Recursion Basics](#recursion-basics)
- [Recursive Functions](#recursive-functions)
- [Examples](#examples)
- [Usage](#usage)
- [Contributing](#contributing)
- [License](#license)

## Introduction

Recursion is a fundamental concept in computer science and programming. It allows you to solve problems through self-referential functions, which can often simplify complex tasks. This project aims to provide you with a solid understanding of how to use recursion effectively in C.

## Project Structure

This project's structure is organized as follows:

- **main.c**: Contains the main program logic.
- **recursion.c**: Demonstrates various recursive functions and scenarios.
- **Makefile**: Facilitates project compilation and management.

## Recursion Basics

### Key Recursion Concepts

Before diving into the code, it's essential to understand key recursion concepts:

- **Base Case**: A terminating condition that prevents infinite recursion.
- **Recursive Case**: The part of the function that calls itself.
- **Call Stack**: The stack data structure that keeps track of function calls in recursion.

## Recursive Functions

### Implementing Recursive Functions

In C, you can implement recursive functions like this:

```c
int factorial(int n) {
    // Base case: Termination condition
    if (n <= 1) {
        return 1;
    }

    // Recursive case: Function calls itself
    return n * factorial(n - 1);
}

Examples
This project provides various examples that illustrate the power and versatility of recursion. You'll find examples demonstrating the calculation of factorials, Fibonacci numbers, and more in the recursion.c file.

Usage
To make the most of this project for learning recursion in C:

Clone the repository to your local machine:
```bash
git clone https://github.com/yourusername/c-project_name.git
```
Compile the project using the provided Makefile:
```bash
make
```
Run the executable:
```bash
./main
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

Enjoy your journey of understanding recursion in C!


In the this project the following recursive functions are included:

* A function that prints a string, followed by a new line
* A fucntion that prints a string in reverse
* A fuction that returns the length of a string
* A function that returns the factorial of a given number
* A function that returns the value of x raised to the power of y
* A function that returns the natural square root of a number
* A function that returns 1 if the input integer is a prime number, otherwise return 0
* A function that returns 1 if a string is a palindrome and 0 if not
* A function  that compares two strings and returns 1 if the strings can be considered identical, otherwise return 0 
