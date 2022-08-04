#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - add operator
 * @a: first int
 * @b: second int
 * Return: sum of two num
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - sub operator
 * @a: first in
 * @b: second int
 * Return: difference of two numbers
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - product of numbers
 * @a: first int
 * @b: second int
 * Return: product of numb
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division of two numbers
 * @a: first int
 * @b: second int
 * Return: result of the division of the num
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - remainder of the division of 2 numbers
 * @a: first int
 * @b: second int
 * Return: remainder of division of num
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
