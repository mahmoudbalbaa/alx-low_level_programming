#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list
 * @h: a pointer to head node
 * Return: is -1 if h = NULL or count if not
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if ((h->str) == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}

		count++;
		h = h->next;
	}

	return (count);
}
