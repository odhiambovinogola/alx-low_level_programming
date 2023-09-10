#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 * Return: Always 0 (Success)
 */

int main(void)
{
	int v = 0;

	while (v < 16)
	{
		if (v < 10)
		{
			putchar('0' + v);
		} else
		{
			putchar('a' + v - 10);
		}
		v++;
	}

	putchar('\n');
	return (0);
}

