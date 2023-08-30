#include "main.h"

/**
 *_sqrt_recursion - Function that prints a square root of a number
 *
 *@n: The number to be tested
 *
 *Return: Number after square root
 */

int _sqrt_recursion(int n)
{
	return (guess(n, 1));
}

/**
 * guess - guesses the square root recursively
 * @h: number to be compared to sqrt
 * @i: integer to be incremented to find square root
 * Return: square root if natural square root or -1
 */

int guess(int h, int i)
{
	int sqrt;

	sqrt = i * i;
	if (sqrt == h)
		return (i);
	else if (sqrt < h)
		return (sqrt(h, i + 1));
	else
		return (-1);
}
