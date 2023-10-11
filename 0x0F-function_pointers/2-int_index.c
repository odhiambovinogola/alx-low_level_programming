#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - Function that searches for an integer
 * @array: Array of integers
 * @size: Size of array
 * @cmp: Pointer to function that compares two integers
 *
 * Return: Pointer to integer or NULL
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, res;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
		res = cmp(array[i]);
	if (res == 1)
		return (i);
	return (-1);
}
