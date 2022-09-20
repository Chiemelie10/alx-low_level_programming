#include "main.h"

/**
 * _atoi - A function that convert string to an integer value
 *
 * @s: The string to be converted
 *
 * Return: 0 if no numbers in the string. Returns int value
 * of the converted string if there are numbers.
 */

int _atoi(char *s)
{
	unsigned int num;
	int sign;

	num = 0;
	sign = 1;

	do {
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');
		else if (num > 0)
			break;
	} while (*s++);
	return (num * sign);
}
