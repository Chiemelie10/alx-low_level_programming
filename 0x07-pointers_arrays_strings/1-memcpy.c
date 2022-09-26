#include "main.h"

/**
 * _memcpy - A function that copies that copies memory area
 *
 * @dest: The pointer to the destination array where the content
 * is to be copied
 *
 * @src: The pointer to the source of data to be copied
 *
 * @n: The number of bytes to be copied
 *
 * Return: A pointer to the destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
