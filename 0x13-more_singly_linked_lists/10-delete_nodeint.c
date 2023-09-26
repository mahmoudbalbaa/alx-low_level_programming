#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at index index of
 * a listint_t linked list
 * @head: address of first node
 * @index: the given num
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp = NULL, *current = NULL;

	if (head == NULL)
		return (-1);

	temp = *head;
	if (temp == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	for (i = 0; i < index - 1; i++)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
	}

	current = temp->next;
	temp->next = current->next;
	free(current);

	return (1);
}
