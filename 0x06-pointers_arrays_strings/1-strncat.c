#include "main.h"

/**
 * _strncat - A function that concatenates two strings depending
 * on a maximum specified number of characters
 *
 * @dest: Destination string
 *
 * @src: Source string
 *
 * @n: Maximum number of characters to be appended to destination string
 *
 * Return: A pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
