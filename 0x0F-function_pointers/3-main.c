#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Where the program Runs
 *
 * @argc: Number of argument count
 * @argv: Pointer to the argument
 *
 * Return: 0 on success, print Error and exit with 98 if incorrect
 *         number of args, exit with 99 if the operator given is incorrect
 */

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		fprintf(stderr, "Usage: %s <num1> <operator> <num2>\n", argv[0]);
		return (98);
	}
	int num1 = atoi(argv[1]);
	char *operator = argv[2];
	int num2 = atoi(argv[3]);

	if (strlen(operator) != 1 || !get_op_func(operator))
	{
		fprintf(stderr, "Error: Invalid operator\n");
		return (99);
	}

	int result = get_op_func(operator)(num1, num2);

	printf("%d %s %d = %d\n", num1, operator, num2, result);
	return (0);
}
