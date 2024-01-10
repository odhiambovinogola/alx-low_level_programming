#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: Pointer to the string.
 *
 * Return: Length of the string.
 */

int _strlen_recursion(char *s)
{
	int len;

	if (*s == '\0') /* check if end of string */
		return (0);

	len = 1 +  _strlen_recursion(s + 1);

	return (len);
}
