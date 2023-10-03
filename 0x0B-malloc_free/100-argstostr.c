#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all arguments of a program
 * @ac: The argument count
 * @av: Array of argument strings
 *
 * Return: A pointer to the concatenated string, or NULL on failure
 */

char *argstostr(int ac, char **av)
{
	char *aout;
	int count, i, j, index;

	if (ac == 0)
		return (NULL);

	for (count = i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		for (j = 0; av[i][j] != '\0'; j++)
			count++;
		count++;
	}

	aout = malloc((count + 1) * sizeof(char));

	if (aout == NULL)
	{
		free(aout);
		return (NULL);
	}

	for (i = j = index = 0; index < count; j++, index++)
	{
		if (av[i][j] == '\0')
		{
			aout[index] = '\n';
			i++;
			index++;
			j = 0;
		}
		if (index < count - 1)
			aout[index] = av[i][j];
	}
	aout[index] = '\0';

	return (aout);
}
