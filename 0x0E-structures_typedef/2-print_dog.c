#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Prints a dog
 * @d: A pointer to a dog
 *
 * Description: Prints a dog
 */

void print_dog(struct dog *d)
{
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);

	if (d->name == NULL)
		printf("Name: (nil)\n");
	if (d->age == 0)
		printf("Age: (nil)\n");
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	if (d == NULL)
		return;
}
