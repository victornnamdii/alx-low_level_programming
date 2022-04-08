#include <stdio.h>
/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	int z = 0;

	for (z = 0; z < 10 ; z++)
	{
		putchar(z + '0');
	}
	putchar('\n');
	return (0);
}
