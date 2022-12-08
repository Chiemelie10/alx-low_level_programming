#include "lists.h"

/**
 * get_dnodeint_at_index - Gets the nth node of a dlistint_t linked list
 * @head: Pointer to the start of the list
 * @index: Index of the nede, starting from 0
 *
 * Return: The node with the nth index if successful, NULL if the node
 * does not exist
 */


dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	current = head;
	i = 0;

	if (head == NULL)
		return (NULL);

	while (i < index)
	{
		current = current->next;
		i++;
	}

	return (current);
}
