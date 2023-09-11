#include "dog.h"
#include <stdio.h>
#include <stdlib.h>


/**
 *free_dog - frees new struct dog
 *
 *@d: Pointer to the freed memory
 *
 *Return: Void
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
