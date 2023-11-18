The following c programs are for ALX 0x0E-structures_typedef project, inside this project  the following C functions are included:

* A new type with the following elements:
   name, type = char *
   age, type = float
   owner, type = char *
* A function that initialize a variable of type struct dog
* A function that prints a struct dog
* A new type dog_t as a new name for the type struct dog
* A function that creates a new dog
* A  function that frees dogs 

C Structures and Typedef Guide
Overview
This guide introduces C structures and the typedef keyword, essential elements in C programming for organizing data into meaningful structures and creating custom data types.

Table of Contents
Introduction to C Structures
Using Typedef in C
Repository Setup
Compilation Process
Examples
Conclusion
Introduction to C Structures
C Structures (struct) allow the grouping of different data types into a single unit. Each element within a structure is called a member, and they can have different data types. Structures help in organizing and handling complex data effectively.

Using Typedef in C
typedef is used to create custom data types in C. It allows defining aliases for existing data types or structures, providing clearer and more descriptive names for complex types.

Repository Setup
To start using C structures and typedef:

Clone the Repository: Clone this repository to your local machine using the command:

```
git clone https://github.com/Bruka25/alx-low_level_programming
cd 0x0E-structures_typedef
```
Navigate to the Directory: Enter the directory containing the source code.

Compilation Process
For compiling C code containing structures and typedef:

Compile the Code: Use a C compiler to compile the source code containing structures and typedef. For example:

```
gcc gcc -Wall -Werror -Wextra -pedantic -std=c89 source_code.c -o output_executable
```
Run the Executable: Execute the compiled code using:

```
./output_executable
```
Examples
Example 1: C Structure
```
struct Point {
    int x;
    int y;
};

struct Point p1 = {10, 20};
printf("Coordinates: (%d, %d)\n", p1.x, p1.y);
```
Example 2: Typedef Usage
```
typedef struct {
    int hours;
    int minutes;
    int seconds;
} Time;

Time t1 = {12, 30, 45};
printf("Time: %02d:%02d:%02d\n", t1.hours, t1.minutes, t1.seconds);
```
Conclusion
Understanding C structures and typedef is crucial for effectively organizing and manipulating data in C programming. Utilizing structures aids in handling complex data, while typedef enhances code readability by providing descriptive names for custom data types.

This README.md file serves as a guide to understanding and utilizing C structures and typedef in your C programming projects. You can expand on examples, include additional details, or tailor the content according to your specific project requirements.
