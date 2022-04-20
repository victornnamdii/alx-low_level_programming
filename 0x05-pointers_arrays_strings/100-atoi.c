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
		if ((s[i] >= 48 && s[i] <= 57))
		{
			for (i = 0; s[i] != '\0'; i++)
			{
				if ((s[i] <= 57 && s[i] >= 48) || s[i] == 45)
				{
					_putchar(s[i]);
				}
			}
		}
		else
			return (0);
	}
	return (s);
}
