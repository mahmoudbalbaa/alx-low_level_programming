#include "lists.h"

/**
 * add_nodeint - function that returns the number of elements
 * in a linked listint_t list
 * @head: holds the address of the old head
 * @n: holds the int data
 * Return: NULL is head or new is NULL or new_head if not
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	if (head == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
