#include <stdio.h>
/**
 * main - multiplies two numbers
 * @argc: argument counter
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc,  char *argv[])
{
	int i, mul = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < 3; i++)
	{
		mul *= (argv[i] - '0');
	}
	printf("%i\n", mul);
	return (0);
}
