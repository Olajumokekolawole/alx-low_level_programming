#include "main.h"

/**
* _strncat - function to concatenate two strings
*@dest: char ptr
*@src: char ptr
*@n: int
* Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}

	while (src[b] != '\0' && b < n)
	{
		dest[a + b] = src[b];
		b++;
	}
	dest[a + b] = '\0';
	return (dest);
}
