#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 * @s: input string
 * Return: length of a string
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}

/**
 * _strcpy - copies the string pointed to by src into dest
 * @dest: destination
 * @src: source
 * Return: char with copy of string
 */

char *_strcpy(char *dest, char *src)
{
	int v;

	for (v = 0; *(src + v) != '\0'; v++)
	{
		dest[v] = *(src + v);
	}
	dest[v] = '\0';

	return (dest);
}

/**
 * new_dog - Creates a new dog struct
 * @name: Pointer to the name of the dog
 * @age: Age of the dog
 * @owner: Pointer to the owner's name
 *
 * Return: Pointer to the newly created dog struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	unsigned int ln, lo;

	if (name == NULL || owner == NULL)
		return (NULL);

	/* Calculate the lengths of name and owner */
	ln = _strlen(name) + 1;
	lo = _strlen(owner) + 1;

	/* Allocate memory for the dog struct */
	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	/* Allocate memory for the dog's name and owner */
	dog->name = malloc(ln * sizeof(char));
	dog->owner = malloc(lo * sizeof(char));

	/* Check for memory allocation errors */
	if (dog->name == NULL || dog->owner == NULL)
	{
		/* Free allocated memory if an error occurs */
		free(dog->name);
		free(dog);
		return (NULL);
	}

	/* Copy the name and owner strings to the allocated memory */
	_strcpy(dog->name, name);
	dog->age = age;
	_strcpy(dog->owner, owner);

	return (dog);
}
