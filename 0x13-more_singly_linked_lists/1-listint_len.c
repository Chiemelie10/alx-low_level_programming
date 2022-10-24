#include "lists.h"

/**
 * listint_len - A function that returns the number of elements in
 * a linked listint_t list
 * @h: A pointer to the linked list
 * Return: The number of elements in the linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t n_elements;

	n_elements = 0;

	while (h)
	{
		n_elements++;
		h = h->next;
	}
	return (n_elements);
}
