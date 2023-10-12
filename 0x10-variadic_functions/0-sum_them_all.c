#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: amount of the arguments.
 *
 * Return: sum of its parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list members;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(members, n);

	for (i = 0; i < n; i++)
		sum += va_arg(members, int);

	va_end(members);

	return (sum);
}
