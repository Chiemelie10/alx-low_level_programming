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
	int i, size, leng_s1, leng_s2;
	char *concat;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";
	leng_s1 = strlen(s1);
	leng_s2 = strlen(s2);
	size = leng_s1 + leng_s2 + 1;
	concat = (char *) malloc(sizeof(char) * size);
	if (!concat)
		return (NULL);
	for (i = 0; s1[i]; i++)
		concat[i] = s1[i];
	for (i = 0; s2[i]; i++)
		concat[(strlen(s1)) + i] = s2[i];
	concat[(strlen(s1)) + i] = '\0';
	return (concat);
}
