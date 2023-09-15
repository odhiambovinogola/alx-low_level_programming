#include <stdio.h>
#include "main.h"

/**
 * main - take the fizz-buzz challenge
 *
 * Return: Always 0
 */

int main(void)
{
	int k;

	for (k = 1; k < 101; k++)
	{
		if (k % 5 == 0 && k % 3 == 0)
			printf("FizzBuzz ");
		else if (k % 5 == 0)
			if (k == 100)
				printf("Buzz");
			else
				printf("Buzz ");
		else if (k % 3 == 0)
			printf("Fizz ");
		else
			printf("%d ", k);
	}
	printf("\n");

	return (0);
}
