#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	int n1;
	int n2;

	n1 = '0';
	n2 = 'a';
	while (n1 <= '9')
	{
		putchar(n1);
		n1++;
		if (n1 > '9')
		{
			do {
				putchar(n2);
				n2++;
			} while (n2 <= 'f');
		}
	}
	putchar(10);
	return (0);
}
