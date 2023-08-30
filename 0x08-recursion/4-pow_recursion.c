#include "main.h"

/**
 *_pow_recursion - A function that returns x to the power of y
 *
 *@x: Base number
 *@y: The exponent
 *
 *Return: The value of the power
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);

	return (x * _pow_recursion(x, y - 1));
}
