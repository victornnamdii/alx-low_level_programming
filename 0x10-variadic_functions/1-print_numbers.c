#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: charcter used to seperate numbers
 * @n: number of numbers to print
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, x;
	va_list nums;

	va_start(nums, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(nums, int);
		printf("%i", x);
		if (i < (n - 1) && separator !=  NULL)
			printf("%s", separator);
	}
	va_end(nums);
	printf("\n");
}
