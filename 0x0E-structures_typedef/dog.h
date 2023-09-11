#ifndef DOG_HEADER
#define DOG_HEADER

/**
 *struct dog - struct for the given dog attributes
 *
 *@name: Name of the dog
 *@age: age of the dog
 *@owner: Owner of the dog
 *
 *Description: Lists the attributes of the dog.
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
};




void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
