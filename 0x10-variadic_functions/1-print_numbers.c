#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers.
 * @separator: string to be printed between numbers.
 * @n: number of integers passed to the function.
 *
 * Return: no return.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arguments;
	unsigned int i;
	int num;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(arguments, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(arguments, int);
		if (separator == NULL)
		{
			if (i == n - 1)
				printf("%d\n", num);
			else
				printf("%d", num);
		}
		else
		{
			if (i == n - 1)
				printf("%d\n", num);
			else
				printf("%d%s", num, separator);
		}
	}
	va_end(arguments);
}
