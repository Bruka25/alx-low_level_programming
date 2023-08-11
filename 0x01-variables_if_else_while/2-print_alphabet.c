#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the lowercase English alphabet from 'a' to 'z'.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha); /* print the value of the variable */
		alpha++; /* increment the variable (ie: a becomes b) */
	}

	putchar('\n');
	return (0);
}
