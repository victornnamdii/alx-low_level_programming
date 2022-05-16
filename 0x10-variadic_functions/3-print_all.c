#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints anything
 * @format: types of arguments passed to the function
 * c: char
 * i: integer
 * f: float
 * s: char * (if the string is NULL, print (nil) instead
 * any other char should be ignored
 */
void print_all(const char * const format, ...)
{
	int i = 0, j = 0;
	char *str, ch;
	va_list print;

	va_start(print, format);
	while (format && format[i])
	{
		ch = format[i + 1];
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(print, int));
				j = 1;
				break;
			case 'i':
				printf("%i", va_arg(print, int));
				j = 1;
				break;
			case 'f':
				printf("%f", va_arg(print, double));
				j = 1;
				break;
			case 's':
				str = va_arg(print, char *);
				j = 1;
				if (str == NULL)
					str = "(nil)";
				printf("%s", str), j = 1;
				break;
		}
		if (j > 0 && (ch == 'c' || ch == 'i' || ch == 'f' || ch == 's'))
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(print);
}
