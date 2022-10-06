#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - A function that concatenates two strings
 *
 * @s1: First string
 *
 * @s2: Second string
 *
 * @n: The number of bytes of the second string to be used
 *
 * Return: A pointer to the concatenated string if success,
 * NULL if it fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= strlen(s2))
		n = strlen(s2);

	concat = (char *)malloc(strlen(s1) + n + 1);
	if (concat == NULL)
		return (NULL);

	for (i = 0; *(s1 + i) != '\0'; i++)
		*(concat + i) = *(s1 + i);

	for (i = 0; i < n; i++)
		*(concat + strlen(s1) + i) = *(s2 + i);

	*(concat + strlen(s1) + i) = '\0';
	return (concat);
}
