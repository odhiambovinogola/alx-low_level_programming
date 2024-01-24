#include "function_pointers.h"

/**
  * array_iterator - executes a function given as a parameter
 * on each element of an array
 * @array: Pointer to the array to iterate over
 * @size: Size of the array
 * @action: Pointer to the function that performs the action on each element
 *
 * Return: no return
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
