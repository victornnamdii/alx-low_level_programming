#include <stdio.h>
/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	int a = 0;
	int b = 'a';

	for (a = 0; a < 10; a++)
	{
		putchar (a + '0');
	}
	for (b = 'a'; b <= 'f'; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
