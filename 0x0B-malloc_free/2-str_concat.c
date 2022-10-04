#include "main.h"
#include <stdlib.h>

/**
 * str_concat - A function that concatenates two strings
 *
 * @s1: string 1
 *
 * @s2: string 2
 *
 * Return: string 2 appended to string 1 if success, otherwise NULL
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	char *concat;

	if ((s1 == NULL) && (s2 == NULL))
		return (NULL);
	concat = (char *) malloc(strlen(s1) + strlen(s2) + 1);
	if (s1 == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; s1[i]; i++)
			concat[i] = s1[i];
		for (i = 0; s2[i]; i++)
			concat[(strlen(s1)) + i] = s2[i];
		concat[(strlen(s1)) + i] = '\0';
		return (concat);
		free(concat);
	}
}