#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  * main - generates random passwords for 101-crackme
  * Return: 0
  */
int main(void)
{
	int sum;
	char c;

	srand(time(NULL));
	while (sum <= 2649)
	{
		c = rand() % 129;
		sum += c;
		putchar(c);
	}
	putchar(2779 - sum);
	return (0);
}
