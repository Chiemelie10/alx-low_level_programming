#include "main.h"

/**
 * _strcmp - A function that compares two strings
 *
 * @s1: First string
 *
 * @s2: Second string
 *
 * Return: 0 if strings are equal, >0 if the first non-matching
 * character in string 1 is greater (in ASCII) than that of string 2,
 * <0 if the first non-matching character in string 1 is lower (in ASCII)
 * than that of string 2
 */

int _strcmp(char *s1, char *s2)
{
	int result;

	result = strcmp(s1, s2);
	return (result);
}
