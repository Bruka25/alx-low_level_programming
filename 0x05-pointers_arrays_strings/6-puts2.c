#include "main.h"

/**
 *puts2 - prints every other character
 *
 *@str: character to print
 *
 *Return: void
 */

void puts2(char *str)
{
	int b;

	while (str[b] != '\0')
	{
		if (b % 2 == 0)
			_putchar(str[b]);
		b++;
	}
	_putchar('\n');
}
