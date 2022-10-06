#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - A function that allocates memory using malloc
 *
 * @b: The value of memory allocated
 *
 * Return: A pointer to the allocated memory if success, otherwise
 * normal process termination with a status of 98 if malloc fails
 */

void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	else
		return (ptr);
	free (ptr);
}
