#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * _strlen - function that count numbers of character in string
 * @s: string
 * Return: int
*/
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (s[i] != 0)
	{
		i++;
	}
	return (i);
}
/**
 * add_node - function that adds new node at beginning of list
 * @head: double ptr
 * @str: string
 * Return: Always 0.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	char *cpy = strdup(str);

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(cpy);
	new->len = _strlen(cpy);
	new->next = *head;
	*head = new;

	return (new);
}
