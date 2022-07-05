#include "main.h"

/**
*Prints alphabet ten times
*
* Return: 0
*/

{
	int l;
	int n = 0;

	while (n < 10)
	{
		l = 'a';
		while (l <= 'z')
		{
			_putchar(l)
			l += 1;
		}
		_putchar(10);
		n += 1;
	}
	return (0);
}
