#include <stdio.h>

/**
 * main - Prints the number of arguments passed to it
 * @argc: Number of arguments passed to the program
 * @argv: Array of pointers to the arguments
 *
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	
	return (0);
}
