#include "lists.h"

/**
 * dlistint_leng - Gets the length of dlistint_t linked list
 * @h: A pointer to the start of the list
 *
 * Return: Number of nodes in the list
 */
size_t dlistint_leng(const dlistint_t *h)
{
	const dlistint_t *current;
	unsigned int n;

	current = h;
	n = 0;

	if (h == NULL)
		return (0);

	while (current != NULL)
	{
		n++;
		current = current->next;
	}

	return (n);
}

/**
 * delete_dnodeint_at_start - Deletes the node at the beginning of
 * dlistint_t list
 * @head: A pointer to the start of the list
 *
 * Return: 1 if successful, -1 if it fails
 */

int delete_dnodeint_at_start(dlistint_t **head)
{
	dlistint_t *current;

	current = *head;

	if (*head == NULL)
		return (-1);

	current = current->next;
	current->prev = NULL;
	free(*head);
	*head = current;
	current = NULL;

	return (1);
}

/**
 * delete_dnodeint_at_end - Deletes a node at the end of dlistint_t list
 * @head: A pointer to the start of the list
 *
 * Return: 1 if successful, -1 if it fails
 */

int delete_dnodeint_at_end(dlistint_t **head)
{
	dlistint_t *current;
	dlistint_t *behind;

	current = *head;

	if (*head == NULL)
		return (-1);

	while (current->next != NULL)
		current = current->next;

	behind = current->prev;
	behind->next = NULL;
	free(current);
	current = NULL;
	behind = NULL;

	return (1);
}

/**
 * delete_dnodeint_at_index - Deletes a node at a given index
 * of dlistint_t list
 * @head: A pointer to the start of the node
 * @index: The position of the node to be deleted
 *
 * Return: 1 if successful, -1 if it fails
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *behind;
	unsigned int i = 0;
	int number;

	current = *head;

	if (*head == NULL || dlistint_leng(current) <= index)
		return (-1);

	if (!index)
	{
		*head = current->next;
		if (current->next)
			current->next->prev = NULL;
		current->next = NULL;
		free(current);
		return (1);
	}
	if (index == 0)
	{
		number = delete_dnodeint_at_start(head);
		return (number);
	}
	while (i < index)
	{
		current = current->next;
		i++;
	}
	if (current->next == NULL)
	{
		number = delete_dnodeint_at_end(head);
		return (number);
	}
	behind = current->prev;
	behind->next = current->next;
	current->next->prev = behind;
	free(current);
	current = NULL;
	return (1);
}
