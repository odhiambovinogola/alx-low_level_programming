#include <stdio.h>

/**
 * main - Print all the letters except q and e
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		if (alphabet == 'e' || alphabet == 'q')
		{
			alphabet++;
			continue;
		}

		putchar(alphabet);
		alphabet++;
	}

	putchar('\n');
	return (0);
}
