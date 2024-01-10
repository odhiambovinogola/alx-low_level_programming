#include "main.h"

/**
 * _sqrt_recursion - Calculates the natural square root of a number.
 * @n: The number to find the square root for.
 *
 * Return: square root or -1.
 */

int _sqrt_recursion(int n)
{
	/* Base case: Check if 'n' is less than 0 */
	if (n < 0)
		return (-1); /* Return -1 to indicate error for negative numbers */
	else if (n == 0 || n == 1)
		return (n); /* Return 'n' as their square roots are the numbers themselves */
	else
		return (_sqrt_check(n, 1)); /* Call helper function for finding square root*/
}

/**
 * _sqrt_check - Helper function to find the square root using recursion.
 * @n: The number to find the square root for.
 * @i: Iterator for checking possible square roots.
 *
 * Return: Natural square root of 'n' if found, otherwise -1.
 */

int _sqrt_check(int n, int i)
{
	/* Base case: Check if 'i' multiplied by itself equals 'n' */
	if (i * i == n)
		return (i); /* Return 'i' as it's the square root of 'n' */
	else if (i * i > n)
		return (-1); /* Return -1 if 'i' exceeds the square root */
	else
		return (_sqrt_check(n, i + 1)); /* Recursive call, incrementing 'i' */
}
