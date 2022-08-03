#include "function_pointers.h"
/**
 * print_name - function that prints a string
 * @name: pointer char
 * @f: function ptr
*/
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
