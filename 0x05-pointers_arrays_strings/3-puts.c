#include "main.h"

/**
* _puts -> this is a function that prints a string
* @str: a pointer to a function
*/

void _puts(char *str)
{

	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
