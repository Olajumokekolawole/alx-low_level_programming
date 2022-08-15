#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - function that print elements in linked list
 * @h: ptr struct
 * Return: int count of nodes
*/

size_t print_listint(const listint_t *h)
{
	const listint_t *cpy = h;
	unsigned int i = 0;

	while (cpy != NULL)
	{
		printf("%d\n", cpy->n);
		cpy = cpy->next;
		i++;
	}
	return (i);
}
