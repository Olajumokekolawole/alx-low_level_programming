#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - function that allocates memory
 * @b: unsigned int
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
