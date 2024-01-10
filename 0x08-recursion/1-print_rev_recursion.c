#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse recursively
 * @s: Pointer to the string
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0') /* Base case: Check for end of string */
		return;

	_print_rev_recursion(s + 1);
	_putchar(*s); /* Print the current character */
}
