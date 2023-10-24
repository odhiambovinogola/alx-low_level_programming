#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node
 *
 * @head: Pointer to the head of the list.
 * @index: Index of the node, starting at 0.
 *
 * Return: Pointer to the nth node, or NULL if the node does not exist.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *current = head;

	/* Traverse the list until the desired index or end of list */
	while (current != NULL && count < index)
	{
		current = current->next;
		count++;
	}

	/* If index is greater than or equal to the number of nodes, return NULL */
	if (count < index || current == NULL)
		return (NULL);

	return (current);
}
