#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: string
 * Return: void
 */

void print_rev(char *s)
{
	int v = 0;

	while (s[v] != '\0')
	{
		v++;
	}
	v--;
	while (v >= 0)
	{
		_putchar(s[v]);
		v--;
	}

	_putchar('\n');
}
