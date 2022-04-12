#include "main.h"
/**
 * jack_bauer - prints every minute of the day
 */
void jack_bauer(void)
{
	int a, b, c, d, e, f;

	a = 0;

	while (a < 24)
	{
		for (d = 0; d < 60; d++)
		{
			b = a % 10;
			c = a / 10;
			e = d % 10;
			f = d / 10;

			_putchar(c + '0');
			_putchar(b + '0');
			_putchar(58);
			_putchar(f + '0');
			_putchar(e + '0');
			_putchar('\n');
		}
		a++;
	}
}
