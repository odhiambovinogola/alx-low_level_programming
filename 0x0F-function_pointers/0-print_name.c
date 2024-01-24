#include "function_pointers.h"

/**
 * print_name - Prints a name using a given function
 * @name: Pointer to the name to print
 * @f: Pointer to the function that prints the name
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
