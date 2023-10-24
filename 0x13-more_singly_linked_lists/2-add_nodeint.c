#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list
 * @head: Pointer to the pointer to the head node
 * @n: Value to be added to the new node
 *
 * Return: Address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t)); /* Allocate memory for the new node */

	if (newnode == NULL)
		return (NULL);

	/* Set the value of the new node */
	newnode->n = n;

	/* Make the new node point to the current head */
	newnode->next = *head;

	/* Update the head pointer to point to the new node */
	*head = newnode;

	return (newnode);
}
