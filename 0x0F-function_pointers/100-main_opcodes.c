#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: number of arguments.
 * @argv: array of arguments.
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i, num_bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	char *opccode = (char *) main;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x", opccode[i] & 0xFF);
		if (i != num_bytes - 1)
			printf(" ");
	}

	printf("\n");
	return (0);
}
