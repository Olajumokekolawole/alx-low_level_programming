#include "main.h"

/**
 * _realloc - reallocates mem block using malloc and free
 * @ptr: pointer to memory previously allocated
 * @old_size: size, in bytes, of allocated space for pointer
 * @new_size: new size, in bytes of new memory
 *
 * Return: pointer to reallocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p, *copy;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		return (p);
	}

	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	copy = ptr;
	for (i = 0; i < old_size; i++)
		p[i] = copy[i];
	free(ptr);
	return (p);
}
