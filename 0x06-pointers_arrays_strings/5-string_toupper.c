#include "main.h"
#include <stdio.h>

/**
 * string_toupper - changes all lowercase letters of a string
 * to uppercase
 * @s: input string.
 * Return: string array.
 */

char *string_toupper(char *s)
{
	int u;

	for (u = 0; s[u] != '\0'; u++)
	{
		if (s[u] >= 'a' && s[u] <= 'z')
			s[u] = s[u] - 32;
	}

	return (s);
}
