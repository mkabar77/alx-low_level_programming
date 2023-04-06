#include "lists.h"

/**
 * free_listint - set free a linked list
 * @head: list's head
 *
 * Return: it is void
 */

void free_listint(listint_t *head)
{
	listint_t *tmp = head;

	while (tmp != NULL)
	{
		listint_t *next = tmp->next;

		free(tmp);
		tmp = next;
	}
	return (tmp);
}
