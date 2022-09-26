#include "main.h"

/**
 * _strstr - A function that finds the first occurrence of the
 * substring needle in the string haystack. The terminating NULL
 * characters are not compared
 *
 * @haystack: The string to be scanned
 *
 * @needle: The small string to be searched with-in haystack string
 *
 * Return: A pointer to the first occurrence in haystack of any of
 * the entire sequence of characters specified in needle, or a null
 * pointer if the sequence is not present in haystack
 */

char *_strstr(char *haystack, char *needle)
{
	char *result;

	result = strstr(haystack, needle);
	return (result);
}
