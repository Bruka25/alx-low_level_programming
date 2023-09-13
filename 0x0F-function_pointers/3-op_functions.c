#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - Adds two numbers
 *
 * @a: The first number
 * @b: The second number
 *
 * Return: Sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Substracts two numbers
 *
 * @a: The first number
 * @b: The second number
 *
 * Return: Difference of the numbers
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies two numbers
 *
 * @a: The first number
 * @b: The second number
 *
 * Return: The product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides a and b
 *
 * @a: First number
 * @b: The devidend
 *
 * Return: Quotient of the numbers
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Calculates remainder of a and b
 * @a: First number
 * @b: The devidend
 *
 * Return: Remainder of a and b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
