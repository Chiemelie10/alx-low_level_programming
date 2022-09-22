#include "main.h"

/**
 * string_toupper - A function that changes all lowercase letters of
 * a string to uppercase
 *
 * @str: Empty pointer variable
 *
 * Return: The string with uppercase letters
 */

char *string_toupper(char *str)
{
	int i;
	int change;

	change = 'a' - 'A';
	for (i = 0; str[i]; i++)
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
		{
			str[i] -= change;
		}
	}
	return (str);
}
