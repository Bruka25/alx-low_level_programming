#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Where the program Runs
 *
 * @argc: Number of argument count
 * @argv: Pointer to the argument
 *
 * Return: 0 on success, print Error and exit with 98 if incorrect
 *         number of args, exit with 99 if the operator given is incorrect
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int num1, num2;
	char *operation;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	operation = argv[2];
	num2 = atoi(argv[3]);

	if (get_op_func(operation) == NULL || operation[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*operation == '/' && num2 == 0) ||
	    (*operation == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("operation response %d\n", get_op_func(operation)(num1, num2));

	return (0);
}
