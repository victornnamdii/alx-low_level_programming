#include "main.h"
/**
 * leet - encodes a string into 1337
 * @str: char  type pointer
 * Return: updated string
 */
char *leet(char *str)
{
	int i, j;

	char l[] = "aAeEoOtTlL";
	char n[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; l[j] != '\0'; j++)
		{
			if (str[i] == l[j])
				str[i] = n[j];
		}
	}
	return (str);
}
