#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	int a, b, c;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			if (a == b || b < a)
				continue;
			for (c = '0'; c <= '9'; c++)
			{
				if (c == b || c < b)
					continue;
				putchar(a);
				putchar(b);
				putchar(c);
				if (a == '7' && b == '8' && c == '9')
					break;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar(10);
	return (0);
}
