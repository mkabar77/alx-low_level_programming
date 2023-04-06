#include "lists.h"

/**
 * free_listint2 - set free a linked list
 * @head: pointer to the listint_t list freed
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp = *head;

	if (tmp)
		return;
	while (tmp)
	{
		listint_t next = *tmp->next;

		free(tmp);
		*tmp = next;
	}
	tmp = NULL;
}
