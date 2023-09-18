#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: input string
 * Return: void
 */

void puts_half(char *str)
{
	int x, p, max;

	x = 0;
	while (str[x] != '\0')
	{
		x++;
	}
	max = x;
	p = max / 2;
	while (p <= max)
	{
		_putchar(str[p]);
		p++;
	}

	_putchar('\n');
}
