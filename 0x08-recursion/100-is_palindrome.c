#include "main.h"

/**
 * is_palindrome - check if a string is a palindrome
 * @s: char array string
 * Return: 1 if palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	int _strlen(char *s);
	int my_pal(char *s, int l);
	int length;

	length = _strlen(s) - 1;

	return (my_pal(s, --length));
}

/**
 * _strlen - gets length of string
 * @s: string
 * Return: return length of string
 */

int _strlen(char *s)
{
	if (*s == '\0')
		return (1);
	else
		return (1 + _strlen(++s));
}

/**
 * my_pal - recursive check of palindrome
 * @s: string
 * @l: length of string
 * Return: 1 if palindrome, 0 if not
 */

int my_pal(char *s, int l)
{
	if (*s == *(s + l))
	{
		if (l <= 0)
			return (1);
		else
			return (my_pal(++s, l - 2));
	}
	else
		return (0);
}
