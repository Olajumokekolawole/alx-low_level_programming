#include <unistd.h>
#include "main.h"

/**
* main - prints _putchar, followed by a new line
*
* Return: 0
*/

int main(void)
{
	int n = 0;
	char str[8] = "_putchar";

	while (n < 8)
	{
		_putchar(str[n]);
		n += 1;
	}
	_putchar('\n');
	return (0);
}
