#include "main.h"

/**
 * rev_string - reverse string
 * @s: string
 * Return: void
 */

void rev_string(char *s)
{
	int v;
	int count = 0;

	for (v = 0; s[v] != '\0'; v++)
	{
		count++;
		for (v = 0; v < count / 2; v++)
		{
			char k;

			k = s[v];
			s[v] = s[count - 1 - v];
			s[count - 1 - v] = k;
		}
	}
}

