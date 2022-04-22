#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: char type pointer
 * @src: char type pointer
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j, k;

	for (i = 0; dest[i] != '\0'; i++)
		;
	k = i;
	for (i = k, j = 0; src[j] != '\0'; i++, j++)
	{
		dest[i] = src[j];
		dest[i + 1] = '\0';
	}
	return (dest);
}
