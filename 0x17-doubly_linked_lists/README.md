The following programs are for 0x17-doubly_linked_lists for ALX low level programming curriculum, inside it contains the following C functions:

* A function that prints all the elements of a dlistint_t list
* A function that returns the number of elements in a linked dlistint_t list
* A function that adds a new node at the beginning of a dlistint_t list
* A function that adds a new node at the end of a dlistint_t list
* A function that frees a dlistint_t list
* A function that returns the nth node of a dlistint_t linked list
* A function that returns the sum of all the data (n) of a dlistint_t linked list
* A function that inserts a new node at a given position
* A function that deletes the node at index index of a dlistint_t linked list
* Find the password for crackme4
* A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99, 
  Find the largest palindrome made from the product of two 3-digit numbers
* A Write a keygen for crackme5

C Doubly Linked List Guide
Overview
This guide introduces doubly linked lists in C programming, explaining their structure, operations, and implementation. Understanding doubly linked lists is essential for managing dynamic data structures efficiently.

* Table of Contents
* Introduction to Doubly Linked Lists
* Basic Operations on Doubly Linked Lists
* Repository Setup
* Compilation Process
* Examples
* Conclusion

Introduction to Doubly Linked Lists
A doubly linked list is a linear data structure that consists of nodes where each node contains data, a pointer to the next node, and a pointer to the previous node. This bidirectional linking facilitates traversal in both forward and backward directions.

Basic Operations on Doubly Linked Lists
1. Insertion
At the Beginning: Add a node at the beginning of the list.
At the End: Append a node at the end of the list.
At a Specific Position: Insert a node at a specified position in the list.
2. Deletion
From the Beginning: Remove a node from the beginning of the list.
From the End: Delete the last node from the list.
From a Specific Position: Remove a node from a specified position in the list.
3. Traversal and Display
Traverse the list in both forward and backward directions and display its elements.
Repository Setup
To start working with a doubly linked list in C:

Clone the Repository: Clone this repository to your local machine using the command:

```
git clone https://github.com/Bruka25/alx-low_level_programming
cd 0x17-doubly_linked_lists
```
Navigate to the Directory: Enter the directory containing the source code.

Compilation Process
For compiling C code containing a doubly linked list:

Compile the Code: Use a C compiler to compile the source code containing the doubly linked list implementation. For example:

```
gcc -Wall -Werror -Wextra -pedantic -std=c89 source_code.c -o output_executable
```
Run the Executable: Execute the compiled code using:

```
./output_executable
```
Examples
Example 1: Doubly Linked List Creation and Traversal

```
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
    struct Node *prev;
};

// Functions for operations on doubly linked list (insertion, deletion, display, etc.)
// ...

int main() {
    // Create a doubly linked list
    // Perform operations (insertion, deletion, traversal, etc.)
    // Display the list
    return 0;
}
```
Example 2: Doubly Linked List Operations

```
// Implement functions for various operations on the doubly linked list
// Example: Insertion, deletion, traversal, etc.
```

Conclusion
Doubly linked lists in C offer bidirectional traversal and dynamic memory allocation advantages. Understanding their implementation and operations is crucial for managing data effectively.

This README.md file serves as a guide to understanding and implementing a doubly linked list in C, including its structure, basic operations, setup, compilation processes, and example code snippets. Customize or expand upon this document to meet your project's specific requirements.





 
