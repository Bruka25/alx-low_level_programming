#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *print_binary - Prints the binary representation of a number
 *
 *@n: Integer to be converted to binary
 *
 *Return: Void
 */

void print_binary(unsigned long int n)

{
	unsigned long int reverse;
	unsigned long int bit_track;

	reverse = bit_track  = 0;
	if (n == 0)
		_putchar('0');
	while (n > 0)
	{
		reverse = reverse << 1;
		reverse += n & 1;
		bit_track++;
		n = n >> 1;
	}
	while (reverse > 0)
	{
		_putchar((reverse & 1) + '0');
		reverse = reverse >> 1;
		bit_track--;
	}
	if (bit_track > 0)
	{
		while (bit_track != 0)
		{
			_putchar('0');
			bit_track--;
		}
	}
}
