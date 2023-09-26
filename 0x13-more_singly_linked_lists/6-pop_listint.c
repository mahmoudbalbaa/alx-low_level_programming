#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t
 * linked list, and returns the head node’s data (n)
 * @head: holds the address of the head node
 * Return: 0 if head is NULL or n if not
 */

int pop_listint(listint_t **head)
{
	listint_t *temp = NULL;
	int n = 0;

	if (head == NULL || *head == NULL)
		return (0);

	temp = *head;
	*head = (*head)->next;
	n = temp->n;
	free(temp);

	return (n);
}
