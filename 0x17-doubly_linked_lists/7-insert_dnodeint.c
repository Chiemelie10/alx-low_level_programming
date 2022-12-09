#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts node at a given poition
 * of a dlistint_t list
 * @h: A double pointer to the head
 * @idx: Position to insert the node, starting from 0
 * @n: Integer to be included in the node
 *
 * Return: Address of the new node if successful or NULL if it fails
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current, *newnode, *node, *behind;
	unsigned int i = 0;

	current = *h;

	if (*h == NULL || dlistint_len(current) < idx)
		return (NULL);

	newnode = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = NULL;

	if (idx == 0)
	{
		node = add_dnodeint(h, n);
		return (node);
	}

	if (idx == dlistint_len(current))
	{
		node = add_dnodeint_end(h, n);
		return (node);
	}

	while (i < idx)
	{
		current = current->next;
		i++;
	}
	behind = current->prev;
	newnode->next = current;
	newnode->prev = behind;
	current->prev = newnode;
	behind->next = newnode;
	return (newnode);
}
