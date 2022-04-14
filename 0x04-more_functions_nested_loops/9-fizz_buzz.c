#include <stdio.h>
/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	int i = 1;

	while (i < 101)
	{
		if (i % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 5 == 0 && i < 100)
		{
			printf("Buzz ");
		}
		else if (i == 100)
		{
			printf("Buzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%i ", i);
		}
		i++;
	}
	printf("\n");
	return (0);
}
