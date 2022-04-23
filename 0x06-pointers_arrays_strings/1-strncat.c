#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: char type pointer
 * @src: char type pointer
 * @n: amount of characters to take from src
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j, k;

	for (i = 0; dest[i] != '\0'; i++)
		;
	k = i;
	for (i = k, j = 0; j < n && src[j] != '\0'; i++, j++)
	{
		dest[i] = src[j];
		dest[i + 1] = '\0';
	}
	return (dest);
}
