#include "main.h"

/**
 * get_endianness - checks endianness status
 *
 * Return: 1 if big, 0 if little
 */

int get_endianness(void)
{
	int x = 1;
	char *c = (char *)(&x);

	return (*c);
}
