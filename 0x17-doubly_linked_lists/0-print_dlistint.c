#include "lists.h"
/**
 * print_dlistint - prints all the elements of a list
 * @h: doubly linked lists
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
