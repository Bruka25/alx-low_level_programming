#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Program that adds two positive numbers
 *
 * @argc: The number of arguments
 * @argv: Pointer to the value of arguments
 *
 * Return: 1 if the arguments contain non digit symbols or 0
 */

int main(int argc, char *argv[])
{
	int add;
	int count;
	int i;

	count = 1;
	add = 0;
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	while (count < argc)
	{
		for (i = 0; argv[count][i] != '\0'; i++)
		{
			if (!(isdigit(argv[count][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[count]);
		count++;
	}
	printf("%d\n", add);
	return (0);
}
