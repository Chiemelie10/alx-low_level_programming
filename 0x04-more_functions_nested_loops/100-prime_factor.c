#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (success)
 */

int main(void)
{
	unsigned long num = 612852475143;
	unsigned long bd = num;
	unsigned long bu = 1;
	int divisor = 2;

	while (1)
	{
		if ((bd % divisor) == 0)
		{
			bd = bd / divisor;
			bu = bu * divisor;
		}
		else
			divisor++;
		if (bu >= num)
			break;
	}
	printf("%d\n", divisor);
	return (0);
}
