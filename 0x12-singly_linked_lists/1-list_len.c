#include "lists.h"

/**
 * list_len - function that returns the number of elements in
 * a linked list_t list
 * @h: head of linked list
 * Return: count
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
