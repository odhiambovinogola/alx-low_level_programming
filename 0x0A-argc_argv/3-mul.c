#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: Number of arguments passed to the program
 * @argv: Array of pointers to the arguments
 *
 * Return: 0 on success, 1 on error
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;

	/* Check if the program received two arguments */
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	/* Convert command line arguments to integers */
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	/* Multiply the two numbers */
	result = num1 * num2;

	/* Print the result */
	printf("%d\n", result);

	return (0);
}
