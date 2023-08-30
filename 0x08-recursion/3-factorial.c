#include "main.h"

/**
 *factorial - Function that returns the factorial of a given number
 *
 *@n: The number to be printed
 *
 *Return: Factorial of n
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n < 2)
		return (n);
	else
		return (n * factorial(n - 1));
}
