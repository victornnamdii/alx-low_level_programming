#include <stdio.h>
/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	int a = 0;

	while (a < 10)
	{
		putchar(a + '0');
		if (a < 9)
		{
			putchar(44);
			putchar(32);
		}
		a++;
	}
	putchar('\n');
	return (0);
}
