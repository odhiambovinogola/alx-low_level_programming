#include "main.h"

/**
 * _puts - prints a string, followed by a new line
 * @str: input string
 * Return: void
 */

void _puts(char *str)
{
	int v = 0;

	while (str[v] != '\0')
	{
		_putchar(str[v]);
		v++;
	}

	_putchar('\n');
}
