#include "main.h"

/**
 * _square - A function that tests square root of a number
 *
 * @n: Number (integer)
 *
 * @guess: Number to test for square root
 *
 * Return: -1 if the number does not have a natural square root,
 * the square root of the number if it has a natural square root
 */

int _square(int n, int guess)
{
	if ((n == 0) || (n == 1))
	{
		return (n);
	}
	else if ((guess * guess) < n)
	{
		return (_square(n, guess + 1));
	}
	else if ((guess * guess) == n)
		return (guess);
	return (-1);
	return (-1);
}
/**
 * _sqrt_recursion - A function that returns the natural square root
 * of a number
 *
 * @n: Number (integer)
 *
 * Return: -1 if the number does not have a natural square root,
 * the square root of the number if it has a natural square root
 */

int _sqrt_recursion(int n)
{
	int guess = 0;

	if (guess < 0)
		return (-1);
	else
		return (_square(n, guess));
}
