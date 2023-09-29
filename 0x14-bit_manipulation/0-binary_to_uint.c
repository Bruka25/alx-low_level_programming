
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *binary_to_uint - Function to convert a binary number to an unsigned int
 *
 *@b: Pointing to the string of 0 and 1 chars
 *
 *Return: The converted number or 0 if it's other than 0 or 1
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, len;
	unsigned int decimal;

	i = len = decimal = 0;

	if (b == NULL)
		return (0);

	while (b[len] != '\0')
	{
		if (b[len] == '0' || b[len] == '1')
			len++;
		else
			return (0);
	}
	while (i < len)

	{
		decimal = decimal << 1;
		if (b[i] == '1')
			decimal += 1;
		i++;
	}
	return (decimal);
}
