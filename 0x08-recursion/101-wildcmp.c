#include "main.h"

/**
 * wildcmp - Compares two strings allowing '*' wildcard in the second string.
 * @s1: The first string to compare.
 * @s2: The second string to compare (may contain '*').
 *
 * Return: 1 if 's1' and 's2' can be considered identical, otherwise 0.
 */

int wildcmp(char *s1, char *s2)
{
    /* Base cases: Check for both strings reaching the end */
	if (*s1 == '\0' && *s2 == '\0')
		return (1); /* Both strings have reached the end, consider them identical */
	else if (*s2 == '*')
	{
		if (*s1 == '\0')
			return (wildcmp(s1, s2 + 1));
		else
			return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	else if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1)); /* Characters match, continue comparing */
	else
		return (0); /* Characters don't match, strings are not identical */
}
