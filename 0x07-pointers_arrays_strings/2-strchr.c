#include <stdio.h>
#include "main.h"

/**
 * _strchr - Locates the first occurrence of a character in a string
 * @s: Pointer to the string to be searched
 * @c: Character to be located
 *
 * Return: NULL if char not found, or pointer to first occurrence of char `c`
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return (NULL);
}
