#ifndef DOG_H
#define DOG_H

/**
 *struct dog - struct for the given dog attributes
 *
 *@name: Name of the dog
 *@age: age of the dog
 *@owner: Owner of the dog
 *
 *Description: Lists the attributes of the dog.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - A new typedef for struct dog
 */

typedef struct dog dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
int _putchar(char c);

#endif
