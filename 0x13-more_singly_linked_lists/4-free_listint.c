#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint - clans a linked list
 * @head: ptr
 * Return: void
*/
void free_listint(listint_t *head)
{
	listint_t *cpy;

	while (head)
	{
		cpy = head;
		head = head->next;
		free(cpy);
	}
}
