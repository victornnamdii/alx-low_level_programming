#include <stdio.h>
/**
 * main - entry block
 * Return: 0
 */
int main(void)
{
	int a = 0, c = 0;

	while (a < 1024)
	{
		if ((a % 5) == 0 || (a % 3) == 0)
		{
			c = c + a;
		}
		a++;
	}
	printf("%i\n", c);
	return (0);
}
