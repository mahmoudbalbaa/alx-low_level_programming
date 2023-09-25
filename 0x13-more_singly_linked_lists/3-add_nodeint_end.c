#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node
 * at the end of a listint_t list
 * @head: holds the address of the head
 * @n: the int data
 * Return: NULL if head or nend_node is NULL or head if not
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = NULL;
	listint_t *nend_node = malloc(sizeof(listint_t));

	if (head == NULL)
		return (NULL);
	if (nend_node == NULL)
		return (NULL);

	nend_node->n = n;
	nend_node->next = NULL;

	if (*head == NULL)
	{
		*head = nend_node;
		return (*head);
	}

	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = nend_node;

	return (*head);
}
