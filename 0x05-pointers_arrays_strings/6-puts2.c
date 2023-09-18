#include "main.h"

/**
 * puts2 - prints one char out of 2 of a string.
 * @str: input string.
 * Return: void
 */

void puts2(char *str)
{
	int v;

	v = 0;
	while (str[v] != '\0')
	{
		if (v % 2 == 0)
			_putchar(str[v]);
		v++;
	}

	_putchar('\n');
}
