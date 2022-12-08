#include "lists.h"

/**
 * dlistint_len - Checks the number of elements in a linked dlistint_t
 * @h: A pointer to the start of the list
 *
 * Return: Number of elements in dlistint_t
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current;
	unsigned int n;

	current = h;
	n = 0;

	while (current != NULL)
	{
		n++;
		current = current->next;
	}

	return (n);
}
