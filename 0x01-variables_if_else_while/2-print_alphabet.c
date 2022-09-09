#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	int ch;

	ch = 'a';
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar(10);
	return (0);
}
