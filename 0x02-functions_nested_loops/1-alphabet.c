#include <unistd.h>
#include "main.h"

/**
*main - prints alphabet in lowercase
*
* Return: 0
*/

{
	char l = 'a';

	while (l <= 'z')
	{
		_putchar(l);
		letter += 1;
	}
	_putchar ('\n');
	return (0);
}
