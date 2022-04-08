#include <stdio.h>
/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	char k = 'z';

	while (k >= 'a')
	{
		putchar(k);
		k--;
	}
	putchar('\n');
	return (0);
}
