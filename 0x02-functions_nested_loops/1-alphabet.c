#include <unistd.h>
#include "main.h"

/**
*main - prints alphabet in lowercase
*
* Return: 0
*/

{
	int a;

	for (a = 97; a <= 122; a++)
	{
		_putchar(a);
	}
	_putchar ('\n');
	return (0);
}
