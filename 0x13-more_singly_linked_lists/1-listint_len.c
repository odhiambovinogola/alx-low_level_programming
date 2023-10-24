#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked listint_t list.
 * @h: Pointer to the head of the linked list.
 *
 * Return: Number of elements in the list.
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0; /* Initialize a counter variable */

	/* Check if the list is empty */
	if (h == NULL)
		return (0);

	/* Traverse the list */
	while (h != NULL)
	{
		count++;    /* Increment the counter */
		h = h->next; /* Move to the next node */
	}

	/* Return the total count */
	return (count);
}
