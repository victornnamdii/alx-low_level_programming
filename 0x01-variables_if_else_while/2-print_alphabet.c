#include <stdio.h>

/**
 * main - main block
 * Description - putchar used to print alphabets
 * Return: 0
 */

int main(void)
{
	char j = 'a';

	while (j <= 'z')
	{
		putchar(j);
		j++;
	}

	putchar('\n');
	return (0);
}
