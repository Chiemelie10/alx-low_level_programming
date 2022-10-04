#include "main.h"
#include <stdlib.h>

/**
 * create_array - A functions that creates an array of chars,
 * and initializes it with a specific char
 *
 * @size: size of the array
 *
 * @c: character
 *
 * Return: NULL if the size of array is 0 or if it fails,
 * otherwise it returns the created array of characters
 */

char *create_array(unsigned int size, char c)
{
	char *ptr_c;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	ptr_c = (char *) malloc(size * sizeof(char));
	if (ptr_c == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			ptr_c[i] = c;
		}
		return (ptr_c);
	}
}
