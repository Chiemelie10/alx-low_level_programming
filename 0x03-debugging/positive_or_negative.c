#include "main.h"

/**
 * positive_or_negative - Tests if an integer number is positive or negative
 * @i: Number to be tested
 * Return: Nothing
 */
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else
		printf("%d is negative\n", i);
}
