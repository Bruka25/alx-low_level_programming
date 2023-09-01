#include <stdio.h>

/**
 *main - Returns the number of arguments passed to it
 *
 *@argc: The number of arguments
 *@argv: Pointer to the array of arguments
 *
 *Return: 0 for success
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	argv[0] = 0;

	return (0);
}
