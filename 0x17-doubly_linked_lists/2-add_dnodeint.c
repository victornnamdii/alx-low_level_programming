#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a list
 * @head: head of list
 * @n: data of new node
 * Return: the address of the new element, or
 * NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp = malloc(sizeof(dlistint_t));

	if (head == NULL || tmp == NULL)
		return (NULL);
	tmp->n = n;
	tmp->prev = NULL;
	tmp->next = NULL;

	if (*head != NULL)
	{
		tmp->next = *head;
		(*head)->prev = tmp;
	}

	*head = tmp;

	return (*head);
}
