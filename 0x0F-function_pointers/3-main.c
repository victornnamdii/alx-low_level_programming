#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - performs simple operations
 * @argc: argument counter
 * @argv: argument array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a, b;
	int (*m)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && argv[3][0] == 0)
	{
		printf("Error\n");
		exit(100);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	m = get_op_func(argv[2]);
	if (m == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%i\n", m(a, b));
	return (0);
}
