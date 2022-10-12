#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - A function that prints a name
 * @name: string
 * @f: Function pointer that takes strings as parameters
 * Return: Void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
	{
		return;
	}
	else if (f == NULL)
	{
		return;
	}
	else
		(*f)(name);
}

