#include "main.h"

/**
 * jack_bauer - Prints every minute of the day, starting from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int a, b, c, d;

	for (a = '0'; a <= '2'; a++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			if (a == '2' && b == '4')
				break;
			for (c = '0'; c <= '5'; c++)
			{
				for (d = '0'; d <= '9'; d++)
				{
					_putchar(a);
					_putchar(b);
					_putchar(58);
					_putchar(c);
					_putchar(d);
					_putchar(10);
					if (c == '5' && d == '9')
						break;
				}
			}
		}
	}
}
