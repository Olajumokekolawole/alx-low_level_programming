#include "main.h"
#include <stdio.h>

/**
* _abs - function that computes the absolute value of an integer
*
* @n:  is the int that we use for the argument of the function
*
* Return: 0
*/

int print_last_digit(int n)
	{
	n %= 10;

	if (n < 0)
		n *= -1;

	_putchar(n + '0');

	return (n);
	}

