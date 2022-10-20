#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - A function that adds a node at the end
 * of a list_t list
 * @head: A double pointer to list_t list
 * @str: New string to be added
 *
 * Return: The address of a new element, or NULL if it fails
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;
	unsigned int len_str;

	if (str == NULL)
		return NULL;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}

	if (!*head)
	{
		*head = new_node;
		return (new_node);
	}

	len_str = strlen(str);
	new_node->len = len_str;

	new_node->next = NULL;

	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new_node;
	return (new_node);
}
