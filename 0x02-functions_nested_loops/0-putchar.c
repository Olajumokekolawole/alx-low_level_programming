#include <stdio.h>

/**
* main - prints putchar
*
* Return: 0
*/

int main (void)
{
	int n = 0;
	char str[9] = "_putchar";

	while (n < 9)
	{
		_putchar(str[n]);
		n +=1;
	}
	_putchar('\n');
	return (0);
}
