#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a linked list
 * @head: pointer to the head of the linked list
 * @n: integer
 * @next: points to the next node
 *
 * Return: sum of all the data (n) of the linked list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	printf("The sum of the linked list is %d\n", sum);
	return (sum);
}
