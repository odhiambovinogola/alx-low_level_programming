# include "main.h"

/**
 * factorial - Calculates the factorial of a number.
 * @n: The number to calculate the factorial for.
 *
 * Return: Factorial of the number. Returns -1 if n is less than 0 (error).
 */

int factorial(int n)
{
    /* Check if n is negative */
	if (n < 0)
		return (-1); /* Return -1 to indicate an error for negative n */

	else if (n == 0 || n == 1)
		return (1); /* Base case: Factorial of 0 or 1 is 1 */

	else
		return (n * factorial(n - 1)); /* Recursively call factorial for (n-1) */

}
