#include "hash_tables.h"

/**
 *key_index - Gives you the index of a key
 *
 *@key: Key of key : value pair
 *@size: Size of the  array of the hash table
 *
 *Return: Return the index of the key using the
 *        djb2 algorithm
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
