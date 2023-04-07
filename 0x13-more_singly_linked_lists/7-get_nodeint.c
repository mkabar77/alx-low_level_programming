#include "lists.h"

/**
 * get_nodeint_at_index - returns node of an index in a linked list
 * @head: first node in the linked list
 * @index: index of the node to return
 *
 * Return: pointer to the node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp = head;

	if (head == NULL)
	{ /*where list is empty*/
		return (NULL);
	}
	while (unsigned int i = 0; i < index && tmp != NULL; i++)
	{
	tmp = tmp->next;
	}

	return (tmp);
}
