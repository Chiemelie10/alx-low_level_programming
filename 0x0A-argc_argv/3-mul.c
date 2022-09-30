#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * @argc: First arguement of the main function
 *
 * @argv: Second arguement of the main function
 *
 * Return: 0 if success, 1 if error
 */

int main(int argc, char *argv[])
{
	int i, product = 1;

	if (argc)
	{
		if (argc < 3)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			for (i = 1; i < argc; i++)
			{
				product *= atoi(argv[i]);
			}
			printf("%d\n", product);
		}
	}
	return (0);
}
