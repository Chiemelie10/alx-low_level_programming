#include "main.h"

/**
 * _strncpy - A function that copies a string
 *
 * @dest: destination string
 *
 * @src: Source string
 *
 * @n: Number of characters to be copied
 *
 * Return: The pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
