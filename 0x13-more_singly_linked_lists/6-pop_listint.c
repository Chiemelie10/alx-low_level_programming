#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - A function that deletes the head node of a
 * listint_t linked list
 * @head: A double pointer to the first node of listint_t list
 * Return: The data inside the node that was deleted, 0 if list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int del;

	if ((head == NULL) || (*head == NULL))
		return (0);
	del = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (del);
}
