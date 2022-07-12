#include "main.h"
/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: char type pointer to destination
 * @src: char type pointer to source of bytes
 * @n:number of bytes to take from source
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	int j = n;

	for (i = 0; i < j; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
