
#include "main.h"

/**
  * print_square - Prints n squares n number of times
  * @size: The number of squares/number of times
  *
  * Return: void
  */
void print_square(int size)
{
	int c, d;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (c = 0; c < size; c++)
		{
			for (d = 0; d < size; d++)
			{
				_putchar(35);
			}

			_putchar('\n');
		}
	}
}
