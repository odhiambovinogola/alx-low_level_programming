#include "main.h"

/**
 * _sqrt_helper - returns the natural square root of a number.
 * @n: input number.
 * @g: iterator.
 * Return: square root or -1.
 */

int _sqrt_helper(int n, int g)
{
	if (g * g == n)
	{
		return (g);
	}
	else if (g * g > n)
	{
		return (-1);
	}

	return (_sqrt_helper(n, g + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer
 * Return: integer - square root, if none returns -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}

	return (_sqrt_helper(n, 1));
}
