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
	int i, j, size, leng_s1, leng_s2;
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
	for (i = 0; i < leng_s1; i++)
		*(concat + i) = *(s1 + i);
	for (j = 0; i <= size; i++, j++)
		*(concat + i) = *(s2 + j);
	return (concat);
}
