#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: destination
 * @src: source
 * Return: the pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int k = 0;

	while (dest[k] != '\0')
	{
		k++;
	}
	for (i = 0 ; i < k && src[i] != '\0' ; i++)
		dest[k + i] = src[i];
	dest[k + i] = '\0';

	return (dest);
}
