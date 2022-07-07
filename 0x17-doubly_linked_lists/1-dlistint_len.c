#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a linked list
 * @h: doubly linked lists
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
