
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *get_bit - Returns the value of bit at a given index
 *
 *@n: The number
 *@index: Index starting from 0, of the bit we want to get
 *
 *Return: Value of bit or -1 if error occured
 */

int get_bit(unsigned long int n, unsigned int index);
{
	unsigned long int bit_track;

	bit_track = 0;

	if (index > 63)
		return (-1);

	while (n > 0)
	{
		if (bit_track == index)
			return (n & 1);
		n = n >> 1;
		bit_track++;
	}

	if (bit_track < index)
		return (0);

	return (-1);
}
