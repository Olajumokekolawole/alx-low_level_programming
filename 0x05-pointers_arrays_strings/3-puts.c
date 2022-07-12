#include "main.h"

/**
* _puts -> this is a function that prints a function
* @str: pointer to a string to print
*
* Return: 0
*/

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
