#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *flip_bits - Function that flips the bits from one number to the other
 *
 *@n: First integer
 *@m: The second number that the bits would be flipped to
 *
 *Return: Number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bit_dif;
	int bit_num;

	bit_dif = n ^ m;
	bit_num = 0;

	while (bit_dif)
	{
		bit_num++;
		bit_dif &= (bit_dif - 1);
	}

	return (bit_num);
}
