#include "main.h"
#include <stdio.h>
/**
 * print_buffer - prints a buffer
 * @b: char type pointer
 * @size: size of buffer
 */
void print_buffer(char *b, int size)
{
	int i, j, k, l;
	int n = sizeof(b) / sizeof(char);

	n--;
	if (size  <= 0)
		printf("\n");
	else
	{
		j = 0;
		for (i = 0; i < n; i += 10)
		{
			j = i;
			printf("%08x: ", i);
			for (k = i; k >= i  && k < (i + 10); k +=  2)
			{
				if (k < n && (k + 1) < n)
					printf("%x%x ", b[k], b[k +1]);
				else if (k < n)
					printf("%x", b[k]);
				else
				{
					for (l = (8 - k) / 2; l > 0; l--)
						printf("\t");
				}
			}
			while (i < (j + 10))
			{
				if (b[i] < 32)
					printf(".");
				else
				{
					printf("%c", b[i]);
				}
				i++;
			}
			printf("\n");
		}
	}
}
