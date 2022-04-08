#include <stdio.h>
/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	int a = 0;
	int b = ',';

	while (a < 10)
	{
		putchar(a);
		putchar(b);
		putchar(' ');
		a++;
	}
	putchar('\n');
	return (0);
}
