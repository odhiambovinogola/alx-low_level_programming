#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - iterates over an array using a function pointer
 * @array: pointer to the array to iterate over
 * @size: size of the array
 * @action: pointer to the function to execute on each element
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t index;

	if (array == NULL || action == NULL)
		return;

	for (index = 0; index < size; index++)
		action(array[index]);
}
