#include <stdio.h>
#define LARGEST 10000000000
/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	unsigned long int x = 0, a = 1, y = 0, b = 2;
	unsigned long int hold1, hold2, hold3;
	int count;

	printf("%lu, %lu, ", a, b);
	for (count = 2; count < 98; count++)
	{
		if ((a + b) > LARGEST || y > 0 || x > 0)
		{
			hold1 = (a + b) / LARGEST;
			hold2 = (a + b) % LARGEST;
			hold3 = x + y + hold1;
			x = y, y = hold3;
			a = b, b = hold2;
			printf("%lu%010lu", y, b);
		}
		else
		{
			hold2 = a + b;
			a = b, b = hold2;
			printf("%lu", b);
		}
		if (count != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
