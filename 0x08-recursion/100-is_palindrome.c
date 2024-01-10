#include "main.h"

/**
 * is_palindrome - check if a string is a palindrome
 * @s: char array string
 * Return: 1 if palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	int length = 0;
	char *end = s;

	/* Calculate the length of the string */
	while (*end != '\0')
	{
		length++;
		end++;
	}

	return (my_pal(s, length - 1));
}

/**
 * my_pal - check if a string is a palindrome
 * @s: string
 * @l: length of string
 * Return: 1 if palindrome, 0 if not
 */

int my_pal(char *s, int l)
{
	if (l <= 0)
		return (1);

	if (*s != s[l])
		return (0);

	return (my_pal(++s, l - 2));
}
