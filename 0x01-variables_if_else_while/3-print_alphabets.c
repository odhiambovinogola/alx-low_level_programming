#include <stdio.h>

/**
 * main - print the alphabet in lowercase, and then in uppercase
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphabet_lowercase = 'a', alphabet_uppercase = 'A';

	while (alphabet_lowercase <= 'z')
	{
		putchar(alphabet_lowercase);
		alphabet_lowercase++;
	}

	alphabet_uppercase = 'A';

	while (alphabet_uppercase <= 'Z')
	{
		putchar(alphabet_uppercase);
		alphabet_uppercase++;
	}

	putchar('\n');
	return (0);
}
