(19 sloc)  324 Bytes
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - function that returns number of elements in a linked list
 * @h: ptr
 * Return: int count of nodes
 */
int list_len(const list_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
