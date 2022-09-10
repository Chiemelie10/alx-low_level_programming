#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	n = '0';
	do {
		putchar(n);
		n++;
	} while (n <= '9');
	putchar(10);
	return (0);
}
