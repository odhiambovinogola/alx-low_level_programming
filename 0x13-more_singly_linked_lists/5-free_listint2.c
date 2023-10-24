#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list and sets the head to NULL.
 * @head: Pointer to the pointer to the head of the list.
 */

void free_listint2(listint_t **head)
{
	listint_t *temp, *current_node;

	/* Check if the head is NULL or points to an empty list */
	if (head == NULL || *head == NULL)
		return;

	/* Traverse the list and free each node */
	current_node = *head;

	while (current_node != NULL)
	{
		temp = current_node;
		current_node = current_node->next;
		free(temp);
	}

	*head = NULL; /* Set the head pointer to NULL */
}
