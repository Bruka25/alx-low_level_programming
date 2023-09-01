#include <stdio.h>

/**
 *main - prints all arguments received including the first one
 *
 *@argc: The number of arguments
 *@argv: pointer to the array of arguments
 *
 *Return: 0 for successful exit
 */



int main(int argc, char *argv[])
{
	int argument;

	for (argument = 0; argument < argc; argument++)
		printf("%s\n", argv[argument]);
	return (0);
}
