#include "main.h"
#include <stdlib.h>

/**
 * _strstr - Locate a substring
 * @haystack: String to search in
 * @needle: Substring to find
 *
 * Return: Pointer to beginning of the substring, or NULL if not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (!*needle) /* If needle is an empty string, return haystack */
		return (haystack);

	for (i = 0; haystack[i]; i++)
	{
		j = 0;
		while (needle[j] && needle[j] == haystack[i + j])
		{
			j++;
		}
		if (!needle[j]) /* If the whole needle was matched */
			return (&haystack[i]);
	}

	return (NULL);
}
