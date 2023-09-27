#include "lists.h"

/**
 * print_listint_safe - prints a linked list, safely
 * @head: list of type listint_t to print
 *
 * Return: number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t num = 0;
	const listint_t *slow = head;
	const listint_t *fast = head;

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				printf("[%p] %d\n", (void *)slow, slow->n);
				slow = slow->next;
				num++;
			}
			printf("-> [%p] %d\n", (void *)slow, slow->n);
			return (num);
		}
	}

	while (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		num++;
	}

	return (num);
}

