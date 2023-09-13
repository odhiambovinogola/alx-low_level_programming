#include"main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @x: x is an integer
 * Return: integer
 */

int print_last_digit(int x)
{
	int last = x % 10;

	if (x < 0)
	{
		last = last * -1;
	}

	_putchar(last + '0');
	return (last);
}
