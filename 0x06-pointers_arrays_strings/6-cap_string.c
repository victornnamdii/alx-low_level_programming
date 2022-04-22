#include "main.h"
/**
 * cap_string - Capitalizes the first letter of a string
 * @str: char type pointer
 * Return: the updated string
 */
char *cap_string(char *str)
{
	int i;

	if (str[0] > 96 && str[0] < 123)
		str[0] = str[0] - 32;
	for (i = 1; str[i] != '\0'; i++)
	{
		if (str[i] > 96 && str[i] < 123)
		{
			if (str[i - 1] == 32 || str[i - 1] == 10 || str[i - 1] == 9)
				str[i] = str[i] - 32;
			if (str[i - 1] == 46)
				str[i] = str[i] - 32;
		}
	}
	return (str);
}
