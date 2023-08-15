#include "main.h"

/**
  * print_last_digit - Prints the last digit of a number.
  * @n: The number to be computed.
  *
  * Return: Value of the last digit of number.
  */
int print_last_digit(int n)
{
	int lastD;

	lastD = n % 10;

	if (lastD < 0)
	{
		lastD = lastD * -1;
	}

	_putchar(lastD + '0');

	return (lastD);
}
