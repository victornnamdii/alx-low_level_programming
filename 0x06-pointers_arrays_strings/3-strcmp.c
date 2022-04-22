#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: char typr pointer
 * @s2: char type pointer
 * Return: difference in the values
 */
int _strcmp(char *s1, char *s2)
{
	int i, m;

	for (i = 0; s1[i] != '\0'; i++)
	{
		m = s1[i] - s2[i];
		if (m != 0)
			break;
	}
	if (m == 0)
		m = s1[i] - s2[i];
	return (m);
}
