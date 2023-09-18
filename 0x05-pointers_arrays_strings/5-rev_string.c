#include "main.h"

/**
 * rev_string - reverse string
 * @s: string
 * Return: void
 */

void rev_string(char *s)
{
	char rev = s[0];
	int counter = 0;
	int v;

	while (s[counter] != '\0')
	{
		counter++;
		for (v = 0; v < counter; v++)
		{
			counter--;
			rev = s[v];
			s[v] = s[counter];
			s[counter] = rev;
		}
	}
}
