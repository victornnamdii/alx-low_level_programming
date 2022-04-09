#include <stdio.h>
/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	int a, b, c, d, e, f;

	a = 0;
	d = 1;

	while (a < 99)
	{
		for (d = 1; d < 100; d++)
		{
			b = a % 10;
			c = a / 10;
			e = d % 10;
			f = d / 10;

			if ((f == c && e > b) || f > c)
			{
				putchar(c + '0');
				putchar(b + '0');
				putchar(32);
				putchar(f + '0');
				putchar(e + '0');

				if (a < 98 && d < 100)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
		a++;
	}
	putchar('\n');
	return (0);
}
