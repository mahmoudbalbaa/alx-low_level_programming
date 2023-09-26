#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node at a given
 * position
 * @head: the address of the first node
 * @idx: the given pos
 * @n: data
 * Return: NULL if head or new is NULL or head if not
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head;
	listint_t *new = malloc(sizeof(listint_t));
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (NULL);
	if (new == NULL)
		return (NULL);

	if (idx == 0)
	{
		new->n = n;
		new->next = *head;
		*head = new;
		return (*head);
	}

	while (temp && i < (idx - 1))
	{
		i++;
		temp = temp->next;
	}

	if ((idx - 1) > i && temp == NULL)
		return (NULL);

	new->n = n;
	new->next = temp->next;
	temp->next = new;

	return (*head);
}
