#include "main.h"

/**
 * times_table - Prints the 9 times table
 * Return: void
 */

void times_table(void)
{
	int a, b, product, tens, ones;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			product = a * b;
			tens = product / 10;
			ones = product % 10;

			if (b == 0)
			{
				_putchar('0');
			}
			else if (product < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(ones + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(tens + '0');
				_putchar(ones + '0');
			}
		}

		_putchar('\n');
	}
}
