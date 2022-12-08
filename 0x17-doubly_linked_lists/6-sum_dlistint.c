#include "lists.h"

/**
 * sum_dlistint - Sums all the integers of a dlistint_t linked list
 * @head: A pointer to the start of the list
 *
 * Return: Sum of all the integers of each node, 0 if the list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int total;

	current = head;
	total = 0;

	if (head == NULL)
		return (0);

	while (current != NULL)
	{
		total += current->n;
		current = current->next;
	}

	return (total);
}
