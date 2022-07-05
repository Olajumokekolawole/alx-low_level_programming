#include <unistd.h>
#include "main.h"

/**
*main - prints alphabet in lowercase
*
* Return: 0
*/

{
	int l = 'a';

	while (l <= 'z')
	{
		_putchar(l);
		l += 1;
	}
	_putchar ('\n');
	return (0);
}
