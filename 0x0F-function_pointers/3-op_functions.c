#include "calc.h"

/**
 * op_add - A function that adds two numbers
 * @a: First number
 * @b: Second number
 * Return: The sum of a and b
 */

int op_add(int a, int b)
{
	int result;

	result = a + b;
	return (result);
}

/**
 * op_sub - A function that subtracts two numbers
 * @a: First number
 * @b: Second number
 * Return: The difference of a and b
 */

int op_sub(int a, int b)
{
	int result;

	result = a - b;
	return (result);
}

/**
 * op_mul - A function that multiplies two numbers
 * @a: First number
 * @b: Second number
 * Return: The Product of a and b
 */

int op_mul(int a, int b)
{
	int result;

	result = a * b;
	return (result);
}

/**
 * op_div - A function that divides two numbers
 * @a: First number
 * @b: Second number
 * Return: The result of the division of a and b
 */

int op_div(int a, int b)
{
	int result;

	result = a / b;
	return (result);
}

/**
 * op_mod - A funtion that finds the remainder of division of a by b
 * @a: First number
 * @b: Second number
 * Return: The remainder of the division of a by b
 */

int op_mod(int a, int b)
{
	int result;

	result = a % b;
	return (result);
}
