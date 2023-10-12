#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - adds all the parameters entered
 * @n: numbers of parameters to be added
 * Return: 0 if there is no parameter else the sum of all its parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list sum_numbers;
	int res;
	unsigned int i;

	if (n == 0)
	{
		return (0);
	}

	va_start(sum_numbers, n);

	res = 0;

	for (i = 0; i < n; i++)
	{
		res += va_arg(sum_numbers, int);
	}

	va_end(sum_numbers);

	return (res);
}
