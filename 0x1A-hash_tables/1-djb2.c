#include "hash_tables.h"

/**
 *hash_djb2 -Hash function implementing the djb2 algorithm
 *
 *@str: String to be  hashed
 *
 *Return: Hash output
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hsh;
	int h;

	hsh = 5381;

	while ((h = *str++))
		hsh = ((hsh << 5) + hsh) + h;

	return (hsh);
}

