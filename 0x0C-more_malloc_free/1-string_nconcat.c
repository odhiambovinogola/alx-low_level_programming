#include "main.h"
#include <stdlib.h>

/**
  * string_nconcat - concatenates two strings
  * @s1: string 1
  * @s2: string 2
  * @n: integer that determines whether entire s2 string will be used
  * Return: pointer to allocated memory corresponding with the string*
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *sout;
	unsigned int length_s1, length_s2, length_sout, index;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (length_s1 = 0; s1[length_s1] != '\0'; length_s1++)
		;

	for (length_s2 = 0; s2[length_s2] != '\0'; length_s2++)
		;

	if (n > length_s2)
		n = length_s2;

	length_sout = length_s1 + n;

	sout = malloc(length_sout + 1);

	if (sout == NULL)
		return (NULL);

	for (index = 0; index < length_sout; index++)
		if (index < length_s1)
			sout[index] = s1[index];
		else
			sout[index] = s2[index - length_s1];

	sout[index] = '\0';

	return (sout);
}

