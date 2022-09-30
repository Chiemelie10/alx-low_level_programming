#include <stdio.h>

/**
 * main - Entry point
 *
 * @argc: First arguement of the main function
 *
 * @argv: Second arguement of the main function
 *
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
