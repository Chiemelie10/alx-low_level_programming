#include "main.h"

/**
 * leet - A function that encodes a string into 1337
 * @s: The string to be encoded
 *
 * Return: A pointer to the string
 */

char *leet(char *s)
{
	int i, j;
	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	for (i = 0; s[i]; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == a[j])
			{
				s[i] = b[j];
			}
		}
	}

	return (s);
}
