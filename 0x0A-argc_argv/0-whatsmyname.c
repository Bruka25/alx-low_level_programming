#include <stdio.h>

/**
 *main - prints name followed by a new line
 *
 *@argc: The number of arguments
 *@argv: pointer to the array of arguments
 *
 *Return: Always 0 success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
