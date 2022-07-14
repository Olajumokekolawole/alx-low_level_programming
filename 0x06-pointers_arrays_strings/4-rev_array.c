#include "main.h"

/**
* reverse_array -  function that reverse an array of integers
* @a: int p
* @n: int
* Return: void
*/
void reverse_array(int *a, int n)
{
	int i;
	int j = 0;
	int buffer[500];

	for (i = n - 1; i >= 0; i--)
	{
		buffer[j] = a[i];
		j++;
	}
	for (i = 0; i < n; i++)
	{
		a[i] = buffer[i];
	}
}
