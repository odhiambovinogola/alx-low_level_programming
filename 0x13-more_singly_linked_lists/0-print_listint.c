#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list
 * @h: Pointer to the head of the list
 *
 * Return: The number of nodes in the list
 */

size_t print_listint(const listint_t *h)
{
	int count = 0; /* Initialize a counter to keep track of nodes */

	/* Check if the list is empty */
	if (h == NULL)
		return (0);

	/* Traverse the list and print each element */
	while (h != NULL)
	{
		printf("%d\n", h->n); /* Print the value of the current node */
		h = h->next; /* Move to the next node */
		count++; /* Increment the node counter */
	}

	/* Return the number of nodes */
	return (count);
}
