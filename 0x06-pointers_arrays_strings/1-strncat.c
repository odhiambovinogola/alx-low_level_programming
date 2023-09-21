#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination
 * @src: source
 * @n: number of bytes from src
 * Return: the pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int l = 0;

	while (dest[l] != '\0')
	{
		l++;
	}

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[l + i] = src[i];
	dest[l + i] = '\0';

	return (dest);
}
