#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - compute sum of parameters
 * @n: number of parameters
 * Return: sum (integer)
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list parameters;
	int sum;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(parameters, n);
	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(parameters, int);
	}
	va_end(parameters);

	return (sum);
}