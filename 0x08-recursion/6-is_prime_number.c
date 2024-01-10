#include "main.h"

/**
 * is_prime_number - Checks if the input integer is a prime number.
 * @n: The number to check.
 *
 * Return: 1 if 'n' is a prime number, otherwise 0.
 */

int is_prime_number(int n)
{
	/* Base cases: Check for numbers less than 2 */
	if (n <= 1)
		return (0);
	else
		return (is_prime_recursive(n, 2)); /* Call helper function for prime check */
}

/**
 * is_prime_recursive - Helper function.
 * @n: The number to check.
 * @i: The iterator for checking divisibility.
 *
 * Return: 1 if 'n' is prime, otherwise 0.
 */

int is_prime_recursive(int n, int i)
{
	/* Base case: Check if 'i' reaches the square root of 'n' */
	if (i * i > n)
		return (1); /* Return 1 if 'n' is prime */
	else if (n % i == 0)
		return (0); /* Return 0 if 'n' is divisible by 'i' */
	else
		return (is_prime_recursive(n, i + 1));
}
