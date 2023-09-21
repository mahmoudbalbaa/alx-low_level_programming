#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list
 * @h: a pointer to head node
 * Return: is -1 if h = NULL or count if not
 */

size_t print_list(const list_t *h)
{
	unsigned int count = 0;

	if (h == NULL)
		return (-1);

	while (h)
	{
		if ((h->str) == NULL)
		{
			count++;
			printf("[0] (nil)\n");
		}
		else
		{
			count++;
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
	}

	return (count);
}
