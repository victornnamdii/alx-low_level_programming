#include <stdio.h>
/**
 * main - entry block
 * Return: 0
 */
int main(void)
{
	int a = 0, c;

	while (a < 1024)
	{
		c = 0;

		if ((a % 3) == 0 || (a % 5) == 0)
		{
			scanf("%i", &c);
			c += c;
		}
		a++;
	}
	printf("%i\n", c);
	return (0);
}
