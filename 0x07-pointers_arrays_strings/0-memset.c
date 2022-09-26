#include "main.h"

/**
 * _memset - A function that fills memory with a constant byte
 *
 * @s: A pointer to the block of memory to fill
 *
 * @b: The value to be set
 *
 * @n: The number of bytes to be set to the value
 *
 * Return: A pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
