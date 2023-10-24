#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: Pointer to the pointer to the head of the list.
 * @idx: Index where the new node should be added. Index starts at 0.
 * @n: Value to be added to the new node.
 *
 * Return: Address of the new node, or NULL if it failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *temp;
	unsigned int i;

	newnode = malloc(sizeof(listint_t)); /* Allocate memory for the new node */

	if (newnode == NULL)
		return (NULL);

	/* Set the value of the new node */
	newnode->n = n;

	/* If idx is 0, the new node becomes the new head */
	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}

	/* Traverse the list to find the node before the desired index */
	temp = *head;

	for (i = 0; i < idx - 1; i++)
	{
		if (temp == NULL)
		{
			free(newnode); /* Free the new node if idx is not valid */
			return (NULL);
		}
		temp = temp->next;
	}

	/* Insert the new node at the desired position */
	newnode->next = temp->next;
	temp->next = newnode;

	return (newnode);
}
