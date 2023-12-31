#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print the opcodes of the function
 *
 * @argc: Number of arguments
 * @argv: Pointer to the arguments
 *
 * Return: 0 on success, Print Error for errors, exit value 1 if
 *         incorrect # of args, exit value 2 if number of bytes is negative
 */

int main(int argc, char *argv[])
{
	char *add;
	int a, bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}

	add = (char *)&main;
	bytes = atoi(argv[1]);
	a = 0;

	while (a < bytes - 1)
	{
		printf("%02hhx ", add[a]);
		a++;
	}

	printf("%02hhx\n", add[a]);
	return (0);
}
