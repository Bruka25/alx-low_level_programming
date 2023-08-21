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

	for (b = 0; str[b] != '\0'; b++)
	{
		if (b % 2 == 0)
			_putchar(str[b]);
	}
	_putchar('\n');
}
