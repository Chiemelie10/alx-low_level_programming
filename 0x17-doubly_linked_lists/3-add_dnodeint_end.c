#include "lists.h"

/**
 * add_dnodeint_end - Adds a node at the end of dlistint_t list
 * @head: A double pointer to the start of the list
 * @n: Integer to be included in the new node
 *
 * Return: The address of the new element if successful, or NULL
 * if it fails
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode;
	dlistint_t *current;

	newnode = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;
	newnode->prev = NULL;

	if (*head == NULL)
		*head = newnode;
	else
	{
		current = *head;

		while (current->next != NULL)
			current = current->next;

		current->next = newnode;
		newnode->prev = current;
	}

	return (newnode);
}
