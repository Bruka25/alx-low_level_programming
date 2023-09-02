# Command-Line Arguments in C

Welcome to the "Command-Line Arguments in C" project. This project is designed to help you understand how to use `argc` and `argv` to work with command-line arguments in the C programming language. Command-line arguments allow you to pass input parameters to your C programs when running them from the terminal.

## Table of Contents

- [Introduction](#introduction)
- [Project Structure](#project-structure)
- [Command-Line Arguments](#command-line-arguments)
- [Accessing Command-Line Arguments](#accessing-command-line-arguments)
- [Examples](#examples)
- [Usage](#usage)
- [Contributing](#contributing)
- [License](#license)

## Introduction

Command-line arguments provide a way to pass input data to C programs when launching them from the terminal. This project aims to help you understand how to utilize `argc` and `argv` effectively to process and manipulate command-line arguments.

## Project Structure

This project's structure is organized as follows:

- **main.c**: Contains the main program logic.
- **Makefile**: Facilitates project compilation and management.

## Command-Line Arguments

### Understanding Command-Line Arguments

- `argc` (Argument Count): It is an integer representing the number of command-line arguments.
- `argv` (Argument Vector): It is an array of strings containing the actual command-line arguments.

## Accessing Command-Line Arguments

### Accessing and Processing Arguments

In C, you can access and process command-line arguments as follows:

```c
#include <stdio.h>

int main(int argc, char *argv[]) {
    // Check if the required number of arguments is provided
    if (argc < 2) {
        printf("Usage: %s <arg1> [arg2] [arg3] ...\n", argv[0]);
        return 1;
    }

    // Access and process command-line arguments
    for (int i = 1; i < argc; i++) {
        printf("Argument %d: %s\n", i, argv[i]);
    }

    return 0;
}


Examples
This project provides examples demonstrating how to use argc and argv to work with command-line arguments. You'll find code in the main.c file that processes and displays command-line arguments, along with usage instructions.

Usage
To make the most of this project for learning about command-line arguments in C:

Clone the repository to your local machine:
```bash
git clone https://github.com/yourusername/c-c-project-name.git
```
Compile the project using the provided Makefile:
```bash
make
```
Run the executable:
```bash
./main arg1 arg2 arg3
```
Feel free to explore the code, modify it, and experiment with different command-line arguments to deepen your understanding of using argc and argv in C.

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

Enjoy working with command-line argument in C!


The following projects contains files for 0x0A-argc_argv assignemnt, in this repository the following programs are included:


* A program that prints its name, followed by a new line
* A program that prints the number of arguments passed into it
* A program that prints all arguments it receives
* A program that multiplies two numbers
* A program that adds positive numbers
* A program that prints the minimum number of coins to make change for an amount of money
