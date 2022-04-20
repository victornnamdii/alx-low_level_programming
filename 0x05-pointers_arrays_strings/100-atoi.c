#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: char  type pointer
 * Return: 0 if no number else the converted value
 */
int _atoi(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] >= 48 && s[i] <= 57) && s[i - 1] == '-')
		{
			_putchar(45);
		}
		if (s[i] >= 48 && s[i] <= 57)
		{
			_putchar(s[i]);
		}
	}
	if (*s == '\0')
		return (0);
	else
		return (s[0]);
}
