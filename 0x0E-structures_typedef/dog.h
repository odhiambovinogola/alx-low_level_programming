#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Dog info
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: The owner of the dog
 *
 * Description: No description for this struct
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
