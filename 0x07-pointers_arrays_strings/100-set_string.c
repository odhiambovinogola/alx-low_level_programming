#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char
 * @s: Pointer to a pointer to a char
 * @to: Pointer to the string to set @s to
 */

void set_string(char **s, char *to)
{
	*s = to;
}
