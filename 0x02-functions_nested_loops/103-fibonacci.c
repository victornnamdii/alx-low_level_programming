#include <stdio.h>
/**
 * main - entry block
 * Return: 0
 */
int main(void)
{
	long int a = 1, b = 2, n = 2, d;
	
	printf("%lu", b);
	while (n < 50)
	{
		d = a + b;
		if (d % 2 == 0 && d <= 4000000)
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
