#include "lists.h"

/**
 * print_dlistint - Displays a dlistint_t list
 * @h: A pointer to the start of the list
 *
 * Return: The number of nodes in dlistint_t
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current;
	unsigned int n;

	current = h;
	n = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		n++;
	}

	return (n);
}
