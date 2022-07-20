#include "main.h"

/**
* _pow_recursion - Returns value of x raised to power of y.
* @x: number to be raised.
* @y: power.
*
* Return: The value of x raised to the power of y.
*/
int _pow_recursion(int x, int y)
{
	int r = x;

	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	r *= _pow_recursion(x, y - 1);

	return (r);
}
