#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list
 * @head: holds the address of the head of the linked list
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp = NULL;

	if (head == NULL)
		return;

	while ((*head) != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	*head = NULL;
}
