#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: char  type pointer
 * Return: 0 if no number else the converted value
 */
int _atoi(char *s)
{
	int i, sign = 1;
	unsigned int n = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == 45)
		{
			sign *= -1;
		}
		else if (s[i] >= 48 && s[i] <= 57)
		{
			n = (n * 10) + (s[i] - '0');
		}
		else if (n > 0)
			break;
	}
	return (sign * n);
}
