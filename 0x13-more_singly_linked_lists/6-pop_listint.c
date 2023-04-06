#include "lists.h"

/**
 * pop_listint - deletes nodes heading of a linked list
 * @head: pointer to the first element in the linked list
 *
 * Return: deleted data or 0 if list is empty
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (*head == NULL)
	{
		return (0); /** If list is empty, return 0*/
	}

	temp = *head;
	*head = (*head)->next;
	data = temp->n;

	free(temp);

	return (data);
}
