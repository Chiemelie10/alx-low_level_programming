#include "main.h"

/**
 * _strlen - A function that returns the length of a string
 *
 * @s: Char pointer variable
 *
 * Return: Number of bytes in the string, not counting the null character
 */

int _strlen(char *s)
{
	int length_in_bytes;

	length_in_bytes = strlen(s);
	return (length_in_bytes);
}
