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
	int i, sum = 0, num;
	char *p;

	if (argc == 1)
		printf("%i\n", sum);
	else
	{
		for (i = 1; i < argc; i++)
		{
			num = strtol(argv[i], &p, 10);

			if (*p != 0)
			{
				printf("Error\n");
				return (1);
			}
			else
				sum += atoi(argv[i]);
		}
		printf("%i\n", sum);
	}
	return (0);
}
