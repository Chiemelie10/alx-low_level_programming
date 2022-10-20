#include <stdio.h>
#include "lists.h"

/**
 * before_main - A function that executes before the main function
 */

void __attribute__((constructor)) before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
