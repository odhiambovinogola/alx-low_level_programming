#include <stdio.h>
#include "main.h"

/**
 * main - prints the largest prime factor
 * Return: Always 0
 */

int main(void)
{
	unsigned long int x, z = 612852475143;

	for (x = 3; x < 782849; x = x + 2)
	{
		while ((z % x == 0) && (z != x))
			z = z / x;
	}

	printf("%lu\n", z);
	return (0);
}
