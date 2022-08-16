#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - the number of unique nodes in
 * looped listint_t linked list.
 *
 * @head: ptr to head of listint_t to check.
 *
 * Return: If list is not looped - 0.
 * Otherwise - number of unique nodes in list.
 */

size_t looped_listint_len(const listint_t *head)
{
	const listint_t *slowP, *fastP;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	slowP = head->next;
	fastP = (head->next)->next;

	while (fastP)
	{
		if (slowP == fastP)
		{
			slowP = head;
			while (slowP != fastP)
			{
				nodes++;
				slowP = slowP->next;
				fastP = fastP->next;
			}

			slowP = slowP->next;
			while (slowP != fastP)
			{
				nodes++;
				slowP = slowP->next;
			}

			return (nodes);
		}

		slowP = slowP->next;
		fastP = (fastP->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints listint_t list safely.
 * @head: pointer to head of listint_t list.
 *
 * Return: number of nodes in list.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
