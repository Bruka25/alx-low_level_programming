#include "main.h"

/**
 *print_rev - prints string in reverse
 *
 *@s: the string to be evaluated
 *
 *Return: void
 */

void print_rev(char *s)
{
	int i;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (s[i] != '\0')
	{
		_putchar(s[i--]);
	}
	_putchar('\n');
}
