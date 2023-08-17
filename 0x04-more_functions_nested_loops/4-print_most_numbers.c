#include "main.h"

/**
  * print_most_numbers - Print the numbers since 0 up to 9
  *
  * Description: Prints the numbers excluding 2 and 4
  *
  * Return: The numbers since 0 up to 9
  */
void print_most_numbers(void)
{
	int z = 0;

	for (; z <= 9; z++)
	{
		if (z == 2 || z == 4)
		{
			continue;
		}
		else
		{
			_putchar(z + '0');
		}
	}

	_putchar('\n');
}
