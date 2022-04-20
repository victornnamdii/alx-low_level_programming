#include "main.h"
/**
 * rev_string - reverses a string
 * @s: char type pointer
 */
void rev_string(char *s)
{
	int i = 0, j, l = 0;
	char k;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	j = i;
	while (l <= j / 2)
	{
		k = s[l];
		s[l] = s[i];
		s[i] = k;
		i--;
		l++;
	}
}
