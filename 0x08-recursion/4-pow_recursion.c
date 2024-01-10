#include "main.h"

/**
 * _pow_recursion - Calculates the value of x raised to the power of y.
 * @x: The base number.
 * @y: The exponent.
 *
 * Return: Value of x raised to the power of y, -1 if y is less than 0
 */

int _pow_recursion(int x, int y)
{
	/* Base case: Check if 'y' is negative */
	if (y < 0)
		return (-1); /* Return -1 to indicate an error for negative exponent */

	else if (y == 0)
		return (1); /* Any number raised to the power of 0 is 1 */

	else
		return (x * _pow_recursion(x, y - 1));

}
