#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive numbers
 * @argc: argument counter
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	long sum = 0, num;
	char *p;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			num = strtol(argv[i], &p, 10);

			if (!*p)
			{
				sum += num;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%ld", sum);
	return (0);
}
