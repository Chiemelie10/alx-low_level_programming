#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (success)
 */

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && num % 5 == 0)
		{
			printf("FizzBuzz ");
			continue;
		}
		else if (num % 3 == 0)
		{
			printf("Fizz ");
			continue;
		}
		else if (num % 5 == 0)
		{
			printf("Buzz ");
			continue;
		}
		else
			printf("%d ", num);
	}
	putchar(10);
	return (0);
}
