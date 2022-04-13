#include <stdio.h>
#define LARGEST 10000000000
/**
 * main - entry block
 * Return: 0
 */
int main(void)
{
	unsigned long int a = 1, b = 2, n = 2, d;
	unsigned long int hold1, hold2, x = 0, y = 0, hold3;

	printf("%lu, %lu", a, b);

	while (n < 98)
	{
		d = a + b;
		if (d > LARGEST || x > 0 || y > 0)
		{
			hold1 = (a + b) / LARGEST;
			hold2 = (a + b) % LARGEST;
			hold3 = x + y + hold1;
			x = y, y = hold3;
			a = b, b = hold2;
			printf(", %lu%010lu", y, b);
		}
		else
		{
			printf(", %lu", d);
		}
		a = b;
		b = d;
		n++;
	}
	printf("\n");
	return (0);
}
