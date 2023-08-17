#include "main.h"

/**
  * print_line - Draws a straight line according to parameter
  * @n: The number of straight lines to draw
  *
  * Return: void
  */
void print_line(int n)
{
	int z;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (z = 0; z < n; z++)
		{
			_putchar(95);
		}

		_putchar('\n');
	}
}
