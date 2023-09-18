#include "main.h"

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
