#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of members
 * @size: number of bytes
 * Return: pointer to allocated memory corresponding with the string
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ch;
	unsigned int x;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ch = malloc(nmemb * size);

	if (ch == NULL)
		return (NULL);

	for (x = 0; x < (nmemb * size); x++)
		ch[x] = 0;

	return (ch);
}

