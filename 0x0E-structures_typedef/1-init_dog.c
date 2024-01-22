#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initializes a dog structure
 *
 * @d: Pointer to the dog structure to initialize
 * @name: Pointer to the name of the dog
 * @age: Age of the dog
 * @owner: Pointer to the owner's name
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
