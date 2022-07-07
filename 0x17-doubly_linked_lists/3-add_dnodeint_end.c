#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a list
 * @head: head of doubly linked list
 * @n: data for new node
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp = malloc(sizeof(dlistint_t));
	dlistint_t *end = *head;

	if (tmp  == NULL)
		return (NULL);

	tmp->n = n;
	tmp->prev = NULL;
	tmp->next = NULL;

	if (*head == NULL)
	{
		*head = tmp;
		return (tmp);
	}

	while (end->next != NULL)
		end = end->next;
	end->next = tmp;
	tmp->prev = end;

	return (tmp);
}
