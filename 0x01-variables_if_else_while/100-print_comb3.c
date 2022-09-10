#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	int a;
	int b;

	for (a = '0'; a <= '9'; a++)
		for (b = '0'; b <= '9'; b++)
		{
			if (a == b || b < a)
				continue;
			putchar(a);
			putchar(b);
			if (a == '8' && b == '9')
				break;
			putchar(',');
			putchar(' ');
		}
	putchar(10);
	return (0);
}
