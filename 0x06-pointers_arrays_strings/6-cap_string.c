#include "main.h"

/**
 * cap_string - capitalize all word of a string
 * @s: input string
 * Return: string
 */

char *cap_string(char *s)
{
	int i;
	int p;

	for (i = 0; s[i] != '\0'; i++)
	{
		prev = i - 1;
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (i == 0)
				s[i] = s[i] - 32;
			else if (s[p] >= 9 && s[p] <= 10)
				s[i] = s[i] - 32;
			else if (s[p] >= 32 && s[p] <= 34)
				s[i] = s[i] - 32;
			else if (s[p] >= 40 && s[p] <= 41)
				s[i] = s[i] - 32;
			else if (s[p] == 46)
				s[i] = s[i] - 32;
			else if (s[p] == 59)
				s[i] = s[i] - 32;
			else if (s[p] == 123 || s[prev] == 125)
				s[i] = s[i] - 32;
		}
	}

	return (s);
}
