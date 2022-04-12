#include <stdio.h>
/**
 * main - entry block
 * Return: 0
 */
int main(void)
{
	int a = 0, c, k, m, n;

	while (a < 1024)
	{
		c = 0;
		m = a % 3;
		n = a % 5;

		if (m == 0 || n == 0)
		{
			scanf("%i", &k);
			c = c + k;
		}
		a++;
	}
	printf("%i\n", c);
	return (0);
}
