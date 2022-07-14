#include "main.h"

/**
*
* _strcat - function to concatenate two strings
*@dest: char pointer
*@src: char pointer
*@n: int
* Return: dest
*
*/

char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}

	while (src[b] != '\0')
	{
		dest[a + b] = src[b];
		b++;
	}
	dest[a + b] = '\0';
	return (dest);
}
