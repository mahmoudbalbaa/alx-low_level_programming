#include "lists.h"

/**
 * print_listint -  function that prints all the elements of a listint_t list
 * @h: the head of the linked list
 * Return: 1 if h is NULL or n if not
 */

size_t print_listint(const listint_t *h)
{
	size_t n = 0;
	const listint_t *temp = NULL;

	if (h == NULL)
	{
		printf("Error\n");

		return (1);
	}

	temp = h;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		n++;
		temp = temp->next;
	}

	return (n);
}
