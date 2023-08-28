#include "main.h"

/**
 * print_chessboard - print the chessboard, 2d array
 * @a: 2d array of chars
 */

void print_chessboard(char (*a)[8])
{
	int i, z;

	i = 0;
	while (i < 8)
	{
		z = 0;
		while (z < 8)
		{
			_putchar(a[i][z]);
			z++;
		}
		_putchar('\n');
		i++;
	}
}
