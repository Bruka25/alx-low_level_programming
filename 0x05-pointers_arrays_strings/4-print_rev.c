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
	int len = 0, index;

	while (s[index++])
		len++;

	for (index = len - 1; index >= 0; index--)
		_putchar(s[index]);

	_putchar('\n');
}