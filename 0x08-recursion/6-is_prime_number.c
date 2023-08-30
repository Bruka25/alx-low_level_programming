#include "main.h"

/**
 *is_prime_number - Returns a 1 if it is a prime number or 0 if not
 *
 *@n: The number
 *
 *Return: A prime number
 */

int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);

	if (n >= 2 && n <= 3)
		return (1);

	return (prime_div(n, div));
}

/**
 * prime_div - Checks if the num is divisible
 * @num: The number to be evaluated
 * @div: The divisor.
 *
 * Return: Return 0 if divisible or 1 if not
 */

int prime_div(int num, int div)
{
	if (num % div == 0)
		return (0);

	if (div == num / 2)
		return (1);

	return (prime_div(num, div + 1));
}
