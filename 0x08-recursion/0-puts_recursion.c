#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a new line using recursion
 * @s: Pointer to the string to be printed
 */

void _puts_recursion(char *s)
{
	/* define your base case */
	if (*s == '\0')
		_putchar('\n');

	else
	{
		_putchar(*s); /* print the first character of the string */
		_puts_recursion(++s); /* recursively print the rest of the characters */
	}
}
