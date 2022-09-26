#include "main.h"

/**
 * _strchr - A function that locates a character in a string
 *
 * @s: The string to be scanned
 *
 * @c: This is the character to be searched in s
 *
 * Return: A pointer to the first occurrence of the character c in the
 * string s, or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	char *result;

	result = strchr(s, c);
	return (result);
}
