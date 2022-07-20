#include "main.h"

/**
* factorial - Returns factorial of a given number.
* @n: number to find its factorial.
*
* Return: If n > 0 - factorial of n.
* If n < 0 - 1 indicates an error.
*/
int factorial(int n)
{
	int r = n;

	if (n < 0)
		return (-1);

	else if (n >= 0 && n <= 1)
		return (1);

	r *= factorial(n - 1);

	return (r);
}
