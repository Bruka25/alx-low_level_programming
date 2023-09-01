#include <stdio.h>
#include <stdlib.h>

/**
 *main - prints the multiplication of two arguments
 *
 *@argc: The number of arguments
 *@argv: Pointer to the array of strings
 *
 *Return: 0 for success
 */


int main(int argc, char *argv[])
{
	int num1, num2, mul;

	if (argc == 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	mul = num1 * num2;

	printf("%d\n", mul);

	return (0);
}
