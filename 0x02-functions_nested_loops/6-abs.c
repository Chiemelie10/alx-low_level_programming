#include "main.h"

/**
 * _abs - Computes absolute value of an integer
 * @x: input (integer)
 * Return: Absolute value
 */
int _abs(int x)
{
	if (x >= 0)
		return (x);
	else
		return (x * -1);
}
