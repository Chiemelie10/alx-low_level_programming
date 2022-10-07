#include <stdlib.h>
#include "main.h"

/**
 * _realloc - A function that reallocates a memory block using
 * malloc and free
 *
 * @ptr: A pointer to the memory previously allocated with a
 * call to malloc
 *
 * @old_size: The size, in bytes, of the allocated space for ptr
 *
 * @new_size: The new size, in bytes of the new memory block
 *
 * Return: Returns without doing anything if new size is equal to
 * old size. A pointer to the reallocated memory if success
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	unsigned int i, remainder;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	if ((new_size == 0) && (ptr != NULL))
	{
		free(ptr);
		return (NULL);
	}
	new_ptr = malloc(new_size);

	for (i = 0; i < new_size; i++, old_size++)
	{
		if (new_size > old_size)
		{
			remainder = new_size - old_size;
			for (i = old_size + 1; remainder < new_size; i++, remainder++)
				new_ptr[i] = remainder;
		}
		new_ptr[i] = old_size;
	}
	return (new_ptr);
}
