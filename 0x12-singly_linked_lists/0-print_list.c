#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: A pointer to the head of the list_t list.
 *
 * Return: The number of nodes in the list.
 */

size_t print_list(const list_t *h)
{
	size_t num;

	num = 0;
	while (h != NULL)
	{
		num++;
		if (h->str == NULL)
		{
			printf("[%d] (nil)\n", 0);
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
	}
	return (num);
}
