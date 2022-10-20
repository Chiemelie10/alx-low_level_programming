#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - A function that adds a new node at the beginning
 * of list_t list
 * @head: A pointer to a pointer that points to the beginning
 * of the node of list_t list
 * @str: The new string to be added
 *
 * Return: The address of the new element, or NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_size;
	unsigned int len;

	len = strlen(str);

	new_size = malloc(sizeof(list_t));

	if (!new_size)
		return (NULL);

	new_size->str = strdup(str);
	new_size->len = len;
	new_size->next = *head;
	*head = new_size;

	return (*head);
}
