#include <stdio.h>
/**
 * main - entry block
 * Return: 0
 */
int main(void)
{
	unsigned long int a = 1, b = 2, n = 2, d, j = 10000000000;
	unsigned long int hold1, hold2, x = 0, y = 0, hold3;

	printf("%lu, %lu", a, b);

	while (n < 50)
	{
		d = a + b;
		if (d > j || x > 0 || y > 0)
		{
			hold1 = (a + b) / j;
			hold2 = (a + b) % j;
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
