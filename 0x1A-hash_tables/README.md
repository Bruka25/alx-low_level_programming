0x1A Hash Tables in C

Welcome to the "0x1A-hash_tables" repository! This repository explores the concept of hash tables in the C programming language, a fundamental data structure used for efficient storage and retrieval of key-value pairs. It covers the implementation of hash tables in C, along with common operations and techniques for handling collisions.

Table of Contents

Introduction

Installation

Usage

Contributing

License


Introduction

A hash table, also known as a hash map or dictionary, is a data structure that stores key-value pairs and provides efficient lookup, insertion, and deletion operations. It achieves this efficiency by using a hash function to map keys to indices in an array, allowing for constant-time access to elements in most cases. This repository provides examples and exercises to help C developers understand how hash tables work and how to implement them in C programming.

Installation

To use the code and examples in this repository, follow these steps:

1. Clone the repository to your local machine:

```
git clone https://github.com/Bruka25/alx-low_level_programming
```

2. Navigate to the repository directory:

```
cd 0x1A-hash_tables
```

3. You're ready to explore the C implementations of hash tables!

Usage

This repository contains C implementations of hash tables. To make use of the repository:

1. Navigate to the directory containing the C implementations:

```
cd 0x1A-hash_tables
```

2. Explore the C source code files available in the repository. Each implementation demonstrates the construction and usage of hash tablesin the C programming language.

3. Open the C source code files to view the implementation details and comments explaining how hash tables are implemented and utilized.

4. Study the provided code and accompanying explanations to understand the principles and techniques behind hash tables and how they can be applied in C programming.

5. Experiment with the code, modify it as needed, and test different scenarios to deepen your understanding of hash tables and their capabilities in C.

6. Feel free to use the provided code snippets and examples as references for implementing hash tables in your own C projects or for learning purposes.

Contributing

Contributions to this repository are welcome! If you have ideas for improving existing code, adding new examples, or fixing issues, please feel free to submit a pull request. Before contributing, please review the contribution guidelines.

License

This repository is licensed under the MIT License. See the LICENSE file for details.


The following programs are for ALX 0x1A-hash_tables project for the low level programming language curriculum, inside it contains the following C functions:

* A function that creates a hash table
* A hash function implementing the djb2 algorithm
* A function that gives you the index of a key
* A function that adds an element to the hash table
* A function that retrieves a value associated with a key
* A function that prints a hash table
* A function that deletes a hash table
* In PHP, hash tables are ordered. Wait… WAT? How is this even possible?
* Rewrite the previous functions using these data structures:

       -> shash_table_t *shash_table_create(unsigned long int size);
       -> int shash_table_set(shash_table_t *ht, const char *key, const char *value);
       -> The key/value pair should be inserted in the sorted list at the right place
       -> Note that here we do not want to do exactly like PHP: we want to create a sorted linked list, by key (sorted on ASCII value), 
          that we can print by traversing it. See example.
       -> char *shash_table_get(const shash_table_t *ht, const char *key);
          void shash_table_print(const shash_table_t *ht);
       -> Should print the hash table using the sorted linked list
          void shash_table_print_rev(const shash_table_t *ht);
       ->Should print the hash tables key/value pairs in reverse order using the sorted linked list
          void shash_table_delete(shash_table_t *ht);
