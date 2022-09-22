#include "main.h"

/**
 * cap_string - Capitalizes the first character of all words
 * in a string
 *
 * @str: String
 *
 * Return: str
 */

char *cap_string(char *str)
{
	int i, j;
	int swap = 'a' - 'A';
	char separators[14] = " \t\n,;.!?\"(){}";

	for (i = 0; str[i]; i++)
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
		{
			if (i == 0)
			{
				str[i] -= swap;
			}
			else
			{
				for (j = 0; j <= 12; j++)
				{
					if (separators[j] == *(str + i - 1))
					{
						str[i] -= swap;
					}
				}
			}
		}
	}
	return (str);
}
