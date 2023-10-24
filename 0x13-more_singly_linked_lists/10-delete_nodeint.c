#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given position.
 * @head: Pointer to the pointer to the head of the list.
 * @index: Index of the node that should be deleted. Index starts at 0.
 *
 * Return: 1 (success), -1 (fail).
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *prev;
	unsigned int i;

	/* Check if the list is empty */
	if (*head == NULL)
		return (-1);

	/* If index is 0, delete the head node */
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	prev = *head;
	temp = (*head)->next;

	/* Traverse the list to find the node before the desired index */
	for (i = 1; i < index && temp != NULL; i++)
	{
		prev = temp;
		temp = temp->next;
	}

	/* If index is not valid, return -1 */
	if (temp == NULL)
		return (-1);

	/* Delete the node at the desired position */
	prev->next = temp->next;
	free(temp);

	return (1);
}
