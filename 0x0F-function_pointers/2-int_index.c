#include "function_pointers.h"

/**
 * int_index - Function that searches for an int
 * @array: array of int
 * @size: array size
 * @cmp: function ptr
 * Return: index of first element that matches with camp
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size < 1 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
