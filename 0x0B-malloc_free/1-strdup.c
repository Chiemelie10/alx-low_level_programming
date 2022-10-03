#include <stdlib.h>
#include "main.h"

/**
 * _strdup - A pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str: String to be duplicated
 *
 * Return: NULL if str is NULL or if memory is insufficent,
 * otherwise a pointer to the duplicated string if success
 */

char *_strdup(char *str)
{
	char *ptr_str;
	int i;

	ptr_str = (char *) malloc(strlen(str) + 1);
	if (ptr_str != NULL)
	{
		for (i = 0; *(str + i) != '\0'; i++)
			ptr_str[i] = str[i];
		ptr_str[i] = '\0';
		return (ptr_str);
	}
	else if ((ptr_str != NULL) && (ptr_str < str))
		return (NULL);
	else
		return (NULL);
}
