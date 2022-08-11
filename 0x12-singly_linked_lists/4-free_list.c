#include "lists.h"

/**
 * free_list - frees linked list
 * @head: ptr to linked list
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		free(head->str);
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
