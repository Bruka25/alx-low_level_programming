#include <stdio,h>
#include "main.h"

/**
 *print_array - prints array of n
 *
 *@a: array of integers
 *@n: number of elements in the array
 *
 *Return: void
 */

void print_array(int *a, int n)
{
	int r;

	for (r = 0; r < n; r++)
	{
		printf("%d", a[r]);

		if (r != (n - 1))
		{
			printf(", ");
		}
	}

	printf("\n");
}
