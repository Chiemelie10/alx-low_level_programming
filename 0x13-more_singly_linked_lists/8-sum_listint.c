#include "lists.h"

/**
 * sum_listint - A function that returns the sum of the data(n)
 * of a listint_t linked list
 * @head: A pointer to the linked list
 * Return: Sum of all the data in a linked list, 0 if the list
 * is empty
 */

int sum_listint(listint_t *head)
{
	unsigned int sum;

	sum = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
