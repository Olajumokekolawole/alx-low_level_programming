#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t list.
 * @head: tr to address of head of list_t list.
 *
 * Return: ptr to first node of reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *ahead, *behind;

	if (head == NULL || *head == NULL)
		return (NULL);

	behind = NULL;

	while ((*head)->next != NULL)
	{
		ahead = (*head)->next;
		(*head)->next = behind;
		behind = *head;
		*head = ahead;
	}

	(*head)->next = behind;

	return (*head);
}
