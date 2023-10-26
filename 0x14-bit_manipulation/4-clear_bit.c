#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a specified index.
 * @n: A pointer to an unsigned long integer.
 * @index: The index of the bit to clear, starting from 0.
 *
 * Return: 1 if the operation succeeded, or -1 if an error occurred.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	/* Check if the index is within the valid range */
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	/*Create a mask with 1 at the specified index and negate it to clear the bit*/
	*n &= ~(1UL << index);

	return (1); /* Return 1 to indicate success */
}

