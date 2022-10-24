#include <stdio.h>
#include "lists.h"

/**
 * print_listint - A function that prints all the elements of a listint_t list.
 * @h: A pointer to listint_t
 * Return: The number of nodes in the linked list
 */

size_t print_listint(const listint_t *h)
{
	size_t n_nodes;

	n_nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		n_nodes++;
		h = h->next;
	}
	return (n_nodes);
}
