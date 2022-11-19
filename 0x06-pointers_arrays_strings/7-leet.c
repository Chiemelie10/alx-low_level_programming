#include "main.h"

/**
 * leet - A function that encodes a string into 1337
 * @s: The string to be encoded
 *
 * Return: A pointer to the string
 */

char *leet(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == 'a' || s[i] == 'A')
		{
			s[i] = '4';
		}
		else if (s[i] == 'e' || s[i] == 'E')
		{
			s[i] = '3';
		}
		else if (s[i] == 'o' || s[i] == 'O')
		{
			s[i] = '0';
		}
		else if (s[i] == 't' || s[i] == 'T')
		{
			s[i] = '7';
		}
		else if (s[i] == 'l' || s[i] == 'L')
		{
			s[i] = '1';
		}
	}

	return (s);
}
