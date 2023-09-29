#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *get_endianness - Function that checks endianess of bits
 *
 *Return: 0 if big endian, or 1 if little indian
 */

int get_endianness(void)
{
	int bit;

	bit = 1;

	if (*(char *)&bit == 1)
		return (1);
	else
		return (0);
}
