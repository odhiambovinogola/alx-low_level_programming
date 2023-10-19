#include "lists.h"

/**
 * primary - Print before the main function.
 *
 * Return: void
 */

void __attribute__((constructor)) primary(void);

void primary(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("bore my house upon my back!\n");
}
