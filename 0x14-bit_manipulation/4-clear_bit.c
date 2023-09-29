#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *clear_bit - Sets the value of bit to 0 at a given index
 *
 *@n: Pointer to the number to be converted into binary
 *@index: Index starting from 0 of the bit you want to set
 *
 *Return: 1 if successful or -1 if it fails
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit_pos;
	unsigned int temp;

	if (index > 64)
		return (-1);
	temp = index;
	for (bit_pos = 1; temp > 0; bit_pos *= 2, temp--)
		;

	if ((*n >> index) & 1)
		*n -= bit_pos;

	return (1);
}
