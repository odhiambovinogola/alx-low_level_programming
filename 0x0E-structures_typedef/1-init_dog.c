#include "dog.h"
#include <stdio.h>

/**
 * init_dog - Initializes a dog structure.
 * @d: A pointer to a dog structure.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The name of the dog's owner.
 *
 * Returns: Nothing.
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
