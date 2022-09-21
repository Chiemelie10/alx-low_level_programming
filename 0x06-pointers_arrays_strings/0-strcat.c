#include "main.h"

/**
 * _strcat - A function that concatenates two strings
 *
 * @src: The second string in the function parameter
 *
 * @dest: The first string in the function parameter
 *
 * Return: A pointer to the string dest
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
