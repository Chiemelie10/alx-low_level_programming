#include "main.h"

/**
 * prime - A function that tests for prime numbers
 *
 * @n: Number to be tested
 *
 * @test: Number for checking for a prime number
 *
 * Return: 1 if a prime number, otherwise 0
 */

int check_prime(int n, int test)
{
	if ((n % test) == 0)
		return (0);
	if (test >= (n / 2))
		return (1);
	else
		return (check_prime(n, test + 1));
}
/**
 * is_prime_number - A function that returns 1 if the input
 * integer is a prime number
 *
 * @n: Input integer
 *
 * Return: 1 if input integer is a prime number, otherwise 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if ((n == 2) || (n == 3))
		return (1);
	else
		return (check_prime(n, 2));
}
