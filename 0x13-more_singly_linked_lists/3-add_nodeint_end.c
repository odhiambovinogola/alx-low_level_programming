#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @head: Pointer to the pointer to the head node.
 * @n: Value to be added to the new node.
 *
 * Return: Address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *temp;

	newnode = malloc(sizeof(listint_t)); /* Allocate memory for the new node */

	if (newnode == NULL)
		return (NULL);

	/* Set the value of the new node */
	newnode->n = n;
	newnode->next = NULL;

	/* If the list is empty, make the new node the head */
	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}

	/* Find the last node in the list */
	temp = *head;

	while (temp->next != NULL)
		temp = temp->next;

	/* Make the last node point to the new node */
	temp->next = newnode;

	return (newnode);
}
