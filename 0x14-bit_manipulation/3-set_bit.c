#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *set_bit - Sets the value of bits to 1 at a given index
 *
 *@n: Pointer to number to be converted into binary
 *@index: The index process the bits
 *
 *Return: 1 if successful, or -1 if it fails
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit_pos;

	if (index > 64)
		return (-1);

	for (bit_pos = 1; index > 0; index--, bit_pos *= 2)
		;
	*n += bit_pos;

	return (1);
}
