#include "main.h"

/**
 * reverse_array - reverses array
 * @a: array of integers
 * @n: number of elements in array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int d;
	int e;

	for (d = 0; d < n--; d++)
	{
		e = a[d];
		a[d] = a[n];
		a[n] = e;
	}
}
