#include "main.h"

/**
 * _strpbrk - A function that finds the first character in string 1
 * that matches any character specified in string 2. This does not
 * include the terminating null-characters
 *
 * @s: The string to be scanned (string 1)
 *
 * @accept: The string containing the characters to match (string 2)
 *
 * Return: A pointer to the character in string 1 that matches one
 * of the characters in string 2, or NULL if no such character is
 * found
 */

char *_strpbrk(char *s, char *accept)
{
	char *result;

	result = strpbrk(s, accept);
	return (result);
}
