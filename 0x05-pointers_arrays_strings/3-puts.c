#include "main.h"

/**
* _puts -> this is a function that prints a string
* @str: pointer to a string to print
*
* Return: 0
*/

void _puts(char *str)
{
	if (str)
	{
	while (*str)
	_putchar(*str++);
	_putchar('\n');
	}
}
