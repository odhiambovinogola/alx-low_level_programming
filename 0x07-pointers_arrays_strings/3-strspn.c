#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: Pointer to the initial segment
 * @accept: Pointer to the string containing characters to match
 *
 * Return: Number of bytes in the initial segment of @s
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, c;

	i = 0;
	c = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				c++;
				break;
			}
			j++;
		}
		if (accept[j] == '\0')
			break;
		i++;
	}
	return (c);
}

