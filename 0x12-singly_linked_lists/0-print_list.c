#include <stdio.h>
#include "lists.h"

/**
 * print_list - A function that prints all the elements of list_t list
 * @h: Variable name of list_t
 * Return: The number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		n++;
	}
	return (n);
}
