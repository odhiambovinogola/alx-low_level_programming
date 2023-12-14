#include "main.h"

/**
 * flip_bits - Returns number of bits needed to flip to get from n to m
 * @n: First unsigned long integer.
 * @m: Second unsigned long integer.
 *
 * Return: Number of bits needed to flip.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_res = n ^ m;
	unsigned int count = 0;

	while (xor_res > 0)
	{
		/* Increment count if the rightmost bit is 1 */
		count += xor_res & 1;

		/* Shift right by one bit */
		xor_res >>= 1;
	}

	return (count);
}
