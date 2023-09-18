#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: input string
 * Return: void
 */

void puts_half(char *str)
{
int d;
int e;
int count = 0;

for (d = 0; str[d] != '\0'; d++)
{
	count++;
}
	e = (count - 1) / 2;
for (d = e + 1; str[d] != '\0'; d++)
{
	_putchar(str[d]);
}
	_putchar('\n');
}
