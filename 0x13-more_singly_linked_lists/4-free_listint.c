#include "lists.h"

/**
 * free_listint - function that frees a listint_t list
 * @head: the head of the linked list
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *temp = NULL;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
