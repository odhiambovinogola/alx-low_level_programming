#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - Searches a string for any set of bytes
 * @s: Pointer to the string to be searched
 * @accept: Pointer to the string containing characters to search for
 *
 * Return: Pointer to the byte in @s that matches one of the bytes in @accept
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}

	return (NULL);
}

