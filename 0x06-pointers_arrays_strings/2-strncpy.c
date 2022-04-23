#include "main.h"
/**
 * _strncpy - copies src to dest
 * @dest: char type pointer
 * @src: char type pointer
 * @n: amount of characters to be copied
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (i = i; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
