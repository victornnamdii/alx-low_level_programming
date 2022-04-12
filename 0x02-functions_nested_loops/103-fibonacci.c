#include <stdio.h>
/**
 * main - entry block
 * Return: 0
 */
int main(void)
{
	long int a = 1, b = 2, n = 0, d, k = 2;

	while (n < 50)
	{
		d = a + b;
		if (d % 2 == 0 && d <= 4000000)
		{
			k += d;
		}
		a = b;
		b = d;
		n++;
	}
	printf("%lu\n", k);
	return (0);
}
