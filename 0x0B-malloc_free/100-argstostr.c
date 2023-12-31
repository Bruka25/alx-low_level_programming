#include "main.h"
#include <stdlib.h>

/**
 *argstostr- Concatinates all the arguments
 *
 *@ac: Command line argument count
 *@av: Pointer to the arguments
 *
 *Return: NULL if the arguments are zero or pointer to new string
 */


char *argstostr(int ac, char **av)
{
	char *ptr;
	int arg, byte, index, size = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			size++;
	}

	ptr = malloc(sizeof(char) * size + 1);

	if (ptr == NULL)
		return (NULL);

	index = 0;

	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			ptr[index++] = av[arg][byte];

		ptr[index++] = '\n';
	}

	ptr[size] = '\0';

	return (ptr);
}
