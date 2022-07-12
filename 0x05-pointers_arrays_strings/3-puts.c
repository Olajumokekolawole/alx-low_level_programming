#include "main.h"

/**
* _puts -> this is a function that prints a function 
* @str: pointer to a string to print
*
* Return: 0
*/

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
