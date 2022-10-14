#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - A function that returns the sum of all its parameters
 *
 * @n: The number of parameters
 *
 * Return: 0 if n is 0, sum of the parameters if successful
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list array;
	unsigned int index;
	int result = 0;

	va_start(array, n);

	if (n == 0)
		return (0);

	for (index = 0; index < n; index++)
		result += va_arg(array, int);

	va_end(array);

	return (result);
}
