#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * @argc: First arguement of the main function
 *
 * @argv: Second arguement of the main function
 *
 * Return: 0 if successful, otherwise 1
 */

int main(int argc, char **argv)
{
	int i, d, sum = 0;

	if (argc)
	{
		if (argc == 1)
		{
			printf("%d\n", 0);
		}
		if (argc > 1)
		{
			for (i = 1; i < argc; i++)
			{
				for (d = 0; argv[i][d]; d++)
				{
					if ((argv[i][d] < '0') || (argv[i][d] > '9'))
					{
						printf("Error\n");
						return (1);
					}
				}
				sum += atoi(argv[i]);
			}
			printf("%d\n", sum);
		}
	}
	return (0);
}
