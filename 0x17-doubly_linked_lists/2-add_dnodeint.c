#include "lists.h"

/**
 * add_dnodeint - Add a node at the beginning of a dlistint_t list
 * @head: A double pointer to the head
 * @n: Integer to be included in the new node
 *
 * Return: The address of the new element if successful, or NULL
 * if it fails
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
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
		newnode->next = *head;
		current->prev = newnode;
		*head = newnode;
	}

	return (newnode);
}
