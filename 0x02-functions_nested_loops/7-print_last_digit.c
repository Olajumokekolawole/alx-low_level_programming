#include "main.h"
#include <stdio.h>

/**
* _abs - function that computes the absolute value of an integer
*
* @c:  is the int that will use for the argument of the function
*
* Return: 0
*/
int print_last_digit(int n)
{
	int a;

	if (n < 0)
		n = -n;

	a = n % 10;

	if (a < 0)
		a = -a;

	_putchar(a + '0');

	return (a);
}

