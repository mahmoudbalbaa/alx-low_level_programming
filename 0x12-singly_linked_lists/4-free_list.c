#include "lists.h"

/**
 * free_list - free the memory of head list
 * @head: a linked list
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *temp = NULL;

	while (head != NULL)
	{
		temp = head;
		head = head->next ;
		free(temp->str);
		free(temp);
	}
}
