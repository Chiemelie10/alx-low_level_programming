#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int a, b, c, product;

	a = '0';
	while (a <= '9')
	{
		b = '0';
		while (b <= '9')
		{
			c = '0';
			product = b * c;
			_putchar(product);
			_putchar(',');
			_putchar(' ');
			b++;
		}
		_putchar(10);
		a++;
	}
}
