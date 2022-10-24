#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - A function that frees a listint_t list
 * @head: A pointer to listint_t
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
