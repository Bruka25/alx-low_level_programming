#include "main.h"

/**
 *puts_half - Prints half the string
 *
 *@str: The string in need
 *
 *Return: void
 */

void puts_half(char *str)
{
	int e = 0;
	int f;

	while (str[e] != '\0')
	{
		e++;
	}

	if (e % 2 == 1)
	{
		f = (e - 1) / 2;
		f += 1;
	}
	else
	{
		f = e / 2;
	}

	for (; f < e; f++)
	{
		_putchar(str[f]);
	}

	_putchar('\n');
}
