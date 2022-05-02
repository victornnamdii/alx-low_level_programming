#include <stdio.h>
/**
 * main - multiplies two numbers
 * @argc: argument counter
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc,  char *argv[])
{
	int i, res = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < 3; i++)
	{
		res *= atoi(argv[i]);
	}
	printf("%i\n", res);
	return (0);
}
