#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string
 * to uppercase
 * @s: input string.
 * Return: the pointer to dest.
 */

char *string_toupper(char *s)
{
	int u;

	for (u = 0; s[u] != '\0'; u++)
	{
		if (s[u] >= 'a' && s[u] <= 'z')
			s[u] = s[u] - 32;
	}

	return (u);
}
