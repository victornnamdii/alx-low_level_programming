#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: head of list
 * @idx: index of node
 * @n: data for node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 1;
	dlistint_t *tmp = NULL, *hold = *h, *back = *h;

	if (h == NULL || (hold == NULL && idx > 0))
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	hold = hold->next;
	while (i < idx)
	{
		if (back->next == NULL)
			return (NULL);
		back = back->next;
		hold = hold->next;
		i++;
	}
	if (hold == NULL)
		return (add_dnodeint_end(h, n));

	tmp = malloc(sizeof(dlistint_t));
	if (tmp == NULL)
		return (NULL);

	tmp->n = n;
	tmp->next = hold;
	tmp->prev = back;
	back->next = tmp;
	if (hold != NULL)
		hold->prev = tmp;

	return (tmp);
}
