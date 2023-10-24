#include "lists.h"

/**
 * pop_listint - Deletes the head node.
 * @head: Pointer to the pointer to the head node.
 *
 * Return: Data of the deleted head node, or 0 if the list is empty.
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	/* Check if the list is empty */
	if (*head == NULL)
		return (0);

	/* Save the data of the head node */
	data = (*head)->n;

	/* Store the address of the head node in a temp variable */
	temp = *head;

	/* Move the head pointer to the next node */
	*head = (*head)->next;

	/* Free the memory of the old head node */
	free(temp);

	return (data);
}
