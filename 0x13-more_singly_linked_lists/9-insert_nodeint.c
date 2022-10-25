#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - insert a node at some index
 * @head: The head node
 * @idx: index given by main
 * @n: number to insert in the node
 * Return: The address of the new node, NULL if it fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *temp;
	unsigned int position = 1;/*It stars counting positions at 1*/

	new_node = malloc(sizeof(listint_t));
	if (!new_node || !head)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	if (*head == 0)
		return (NULL);
	temp = *head;
	while (position < idx)
	{
		if (temp == NULL)
			return (NULL);
		temp = temp->next;/*to put tmp in the place we want*/
		position++;
	}
	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);
}
