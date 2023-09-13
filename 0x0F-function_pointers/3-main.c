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

#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	char *operator = argv[2];
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[3]);

	if (strlen(operator) != 1)
	{
		printf("Error\n");
		return (99);
	}

	int result;
	int (*operation)(int, int) = get_op_func(operator);

	if (operation == NULL)
	{
		printf("Error\n");
		return (99);
	}

	result = operation(num1, num2);
	printf("%d\n", result);

	return (0);
}
