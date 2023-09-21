#include "main.h"

/**
 * leet - function that encodes a string into 1337
 * @s: string to be encoded
 * Return: encoded string
 */

char *leet(char *s)
{
	int i;
	int n;
	char c[] = "aAeEoOtTlL";
	char h[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (n = 0; c[n] != '\0'; n++)
		{
			if (s[i] == c[n])
			{
				s[i] = h[n];
			}
		}

	}

	return (s);
}
