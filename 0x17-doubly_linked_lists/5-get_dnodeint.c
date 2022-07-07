#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a doubly
 * linked list
 * @head: head of list
 * @index: index of node
 * Return: nth node or NULL if node doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *tmp = malloc(sizeof(dlistint_t));

	if (tmp == NULL)
		return (NULL);

	for (i = 0; head != NULL; i++)
	{
		tmp = head;
		head = head->next;
		if (i == index)
			return (tmp);
	}

	return (NULL);
}
