#include "lists.h"
/**
 * free_dlistint - frees a doubly linked lists
 * @head: head of list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		tmp = head;
		head = tmp->next;
		free(tmp);
	}
}
