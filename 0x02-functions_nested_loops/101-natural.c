#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 (success)
 */
int main(void)
{
	int a, sum;

	for (a = 0, sum = 0; a < 1024; a++)
	{
		if (a % 3 == 0 || a % 5 == 0)
		{
			sum += a;
			printf("a is: %d; sum is: %d\n", a, sum);
		}
	}
	return (0);
}
