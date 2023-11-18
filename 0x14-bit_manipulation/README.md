The following programs C programs for ALX 0x14-bit_manipulation project, inside this project it contains the following C functions:

* A function that converts a binary number to an unsigned int
* A function that prints the binary representation of a number
* A function that returns the value of a bit at a given index
* A function that sets the value of a bit to 1 at a given index
* A function that sets the value of a bit to 0 at a given index
* A function that returns the number of bits you would need to flip to get from one number to another
* A function that checks the endianness
* A Find the password for this program

Bit Manipulation in C Guide
Overview
This guide introduces bit manipulation in C programming, demonstrating bitwise operations, their significance, and practical use cases. Understanding bit manipulation is crucial for handling individual bits within binary representations efficiently.

* Table of Contents
* Introduction to Bit Manipulation
* Bitwise Operators in C
* Common Bit Manipulation Techniques
* Repository Setup
* Compilation Process
* Examples
* Conclusion

Introduction to Bit Manipulation
Bit manipulation involves performing operations at the bit level, allowing manipulation of individual bits or groups of bits within a data value. It is useful for tasks such as setting, clearing, toggling bits, or extracting specific bits' information.

Bitwise Operators in C
1. AND (&), OR (|), XOR (^), NOT (~)
AND (&): Performs a bitwise AND operation.
OR (|): Performs a bitwise OR operation.
XOR (^): Performs a bitwise XOR (exclusive OR) operation.
NOT (~): Performs a bitwise NOT (complement) operation.
2. Shift Operators (<<, >>)
Left Shift (<<): Shifts the bits to the left by a specified number of positions.
Right Shift (>>): Shifts the bits to the right by a specified number of positions.
Common Bit Manipulation Techniques
1. Setting a Bit
To set a particular bit in a number, use the OR (|) operator with a mask having 1 at the desired bit position.

2. Clearing a Bit
To clear a specific bit in a number, use the AND (&) operator with a mask having 0 at the desired bit position.

3. Toggling a Bit
To toggle (invert) a specific bit in a number, use the XOR (^) operator with a mask having 1 at the desired bit position.

Repository Setup
To start working with bit manipulation in C:

Clone the Repository: Clone this repository to your local machine using the command:

```
git clone https://github.com/Bruka25/alx-low_level_programming
cd 0x14-bit_manipulation
```
Navigate to the Directory: Enter the directory containing the source code.

Compilation Process
For compiling C code containing bit manipulation:

Compile the Code: Use a C compiler to compile the source code containing bit manipulation operations. For example:

```
gcc -Wall -Werror -Wextra -pedantic -std=c89 source_code.c -o output_executable
```

Run the Executable: Execute the compiled code using:

```
./output_executable
```
Examples
Example 1: Setting a Bit
```
unsigned int setBit(unsigned int num, int pos) {
    return num | (1 << pos);
}
```
Example 2: Clearing a Bit

```
unsigned int clearBit(unsigned int num, int pos) {
    return num & (~(1 << pos));
}
```

Conclusion
Bit manipulation in C offers powerful techniques for manipulating individual bits within data. Mastering bitwise operations is crucial for various applications, including optimization, cryptography, and embedded systems.

This README.md file serves as a guide to understanding and utilizing bit manipulation in C programming, including bitwise operators, techniques, setup, compilation processes, and example code snippets. Feel free to customize or expand upon this document to meet your project's specific requirements.
