#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @str: char type pointer
 * Return: the updated string
 */
char *rot13(char *str)
{
	int i, j;

	char l[] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char r[] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; l[j] != '\0'; j++)
		{
			if (str[i] == l[j])
			{
				str[i] = r[j];
				break;
			}
		}
	}
	return (str);
}
