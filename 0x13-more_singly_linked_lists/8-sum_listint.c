#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data (n) of
 * a listint_t linked list
 * @head: the head node
 * Return: 0 if head is NULL or sum if not
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
