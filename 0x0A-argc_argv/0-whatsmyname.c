#include <stdio.h>

/**
 * main - Prints the program name, followed by a new line
 * @argc: Number of arguments passed to the program
 * @argv: Array of pointers to the arguments
 *
 * Return: Always 0 (success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
