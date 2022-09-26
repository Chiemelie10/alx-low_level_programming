#include "main.h"

/**
 * _strspn - A function that gets the length of the initial segment
 * of string 1 which consists entirely of characters in string 2.
 *
 * @s: The string to be scanned (string 1)
 *
 * @accept: The string containing the list of characters to match in s
 * (string 2)
 *
 * Return: The number of characters in the initial segment of s
 * which consist only of characters from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int leng;

	leng = strspn(s, accept);
	return (leng);
}
