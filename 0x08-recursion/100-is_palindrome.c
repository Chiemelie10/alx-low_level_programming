#include "main.h"

/**
 * palindrome - A function that tests for palindrome
 *
 * @s: String to be tested
 *
 * @start: Starting string index
 *
 * @end: Ending string index
 *
 * Return: 1 if a string is a palindrome and 0 if not
 */

int palindrome(char *s, int start, int end)
{
	if (*(s + start) != *(s + end))
		return (0);
	if (start > end)
		return (1);
	else
		return (palindrome(s, start + 1, end - 1));
}
/**
 * is_palindrome - A function that returns 1 if a string is a
 * palindrome and 0 if not
 *
 * @s: String to be tested
 *
 * Return: 1 if a string is a palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	return (palindrome(s, 0, (int) strlen(s) - 1));
}
