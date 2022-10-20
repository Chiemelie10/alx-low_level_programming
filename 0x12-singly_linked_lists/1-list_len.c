#include "lists.h"

/**
 * list_len - A function that returns the number of elements
 * in a lined list_t list
 * @h: Variable name of list_t
 *
 * Return: The number of elements in a linked list_t list
 */

size_t list_len(const list_t *h)
{
	size_t n;

	n = 0;
	while (h)
	{
		h = h->next;
		n++;
	}
	return (n);
}
