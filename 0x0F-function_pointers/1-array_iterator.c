#include "function_pointers.h"

/**
 * array_iterator - execute a function pointer
 * @array: array of int
 * @size: array size
 * @action: function ptr
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
