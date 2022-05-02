#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers
 * @argc: argument counter
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
		printf("%i\n", sum);
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (argv[i] < 48 || argv[i] > 57)
			{
				printf("Error\n");
				return (1);
			}
			else
				sum += atoi(argv[i]);
		}
		printf("%i\n", sum);
		return (0);
	}
}
