#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: number of bytes in memory for each element
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *k;

	if (nmemb == 0 || size  == 0)
		return (NULL);

	k = malloc(nmemb * size);
	if (k == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		*(k + i) = 0;
	return (k);
}
