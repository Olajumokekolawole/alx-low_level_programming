#include "main.h"
#include <stdio.h>

/**
* char *_strncpy - compares two strings
*
* Return: Always 0.
*/

int _strcmp(char *s1, char *s2)
{
	char s1[] = "My ";
	char s2[] = "Home";

	printf("%d\n", _strcmp(s1, s2));
	printf("%d\n", _strcmp(s2, s1));
	printf("%d\n", _strcmp(s1, s1));

	return (0);
}
