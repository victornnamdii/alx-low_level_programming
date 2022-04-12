#include <stdio.h>
/**
 * main - entry block
 * Return: 0
 */
int main(void)
{
	int a = 0, c, k;

	while (a < 1024)
	{
		c = 0;

		if ((a % 3) == 0 || (a % 5) == 0)
		{
			scanf("%i", &k);
			c = c + k;
		}
		a++;
	}
	printf("%i\n", c);
	return (0);
}
