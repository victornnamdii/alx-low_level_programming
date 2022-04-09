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
		while (d < 100)
		{
			b = a % 10;
			c = a / 10;
			e = d % 10;
			f = d / 10;

			putchar(c + '0');
			putchar(b + '0');
			
			if (e > b || f > c)
			{
				putchar(32);
				putchar(f + '0');
				putchar(e + '0');
				
				if (d < 100)
				{
					putchar(44);
					putchar(32);
				}
			}
			d++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
