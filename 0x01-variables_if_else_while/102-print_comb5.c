#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	int a, b, c, d, i, j;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			i = a;
			b++;
			j = b;
			b--;
			for (c = i; c <= '9'; c++)
			{
				for (d = j; d <= '9'; d++)
				{
					putchar(a);
					putchar(b);
					putchar(' ');
					putchar(c);
					putchar(d);
					if (a == '9' && b == '8' && c == '9' && d == '9')
						break;
					putchar(',');
					putchar(' ');
				}
				j = '0';
			}
		}
	}
	putchar(10);
	return (0);
}
