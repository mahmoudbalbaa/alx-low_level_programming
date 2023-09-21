#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a list_t list
 * @head: double pointer to the head of the list
 * @str: string to be included in the new node
 * Return: pointer to the new node, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end_node = malloc(sizeof(list_t));
	list_t *temp = *head;

	if (end_node == NULL)
		return (NULL);

	end_node->str = strdup(str);
	if (end_node->str == NULL)
	{
		free(end_node);
		return (NULL);
	}

	end_node->next = NULL;
	end_node->len = strlen(str);

	if (*head == NULL)
	{
		*head = end_node;
		return (end_node);
	}

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = end_node;

	return (end_node);
}
