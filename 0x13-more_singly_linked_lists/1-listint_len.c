#include "lists.h"

/**
 * listint_len - function that returns the number of
 * elements in a linked listint_t list
 * @h: the head of the linked list
 * Return: value of n
 */

size_t listint_len(const listint_t *h)
{
	size_t n = 0;
	const listint_t *temp = NULL;

	temp = h;
	while (temp)
	{
		n++;
		temp = temp->next;
	}

	return (n);
}
