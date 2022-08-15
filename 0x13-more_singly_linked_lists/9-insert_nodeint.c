#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint - adds new node at beginning of a linked list
 * @head: double ptr
 * @n: constant integer
 * Return: address of new element
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (!new)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}

/**
 * insert_nodeint_at_index - inserts new node at given position.
 * @head: double ptr
 * @idx: integer index
 * @n: n value
 * Return: ptr
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *cpy = *head;
	listint_t *new;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	if (idx == 0)
		return (add_nodeint(head, n));

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	while (cpy != NULL)
	{
		if ((idx - 1) == i)
		{
			new->n = n;
			new->next = cpy->next;
			cpy->next = new;
			return (new);
		}
		cpy = cpy->next;
		i++;
	}
	return (NULL);
}
