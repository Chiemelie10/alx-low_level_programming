#include "lists.h"

/**
 * free_dlistint - Frees dlistint_t list
 * @head: A pointer to the start of the list
 *
 * Return: None
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
