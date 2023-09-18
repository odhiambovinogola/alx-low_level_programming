#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array.
 * @a: input array
 * @n: input n elements
 * Return: void
 */

void print_array(int *a, int n)
{
	int v = 0;

	for (; v < n; v++)
	{
		printf("%d", *(a + v));
		if (v != (n - 1))
			printf(", ");
	}

	printf("\n");
}
