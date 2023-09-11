#include "dog.h"
#include <stdlib.h>

/**
 *init_dog - Initializes a variable type struct dog
 *
 *@d: Pointer to struct
 *@name: Name of the dog
 *@age: Age of the dog
 *@owner: Owner of the dog
 *
 *Return: Void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
