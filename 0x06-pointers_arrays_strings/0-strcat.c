#include "main.h"

/**
* _strcat - function to concatenate two strings
* @dest: char pointer
* @src: char pointer
* Return: char
*/

char *_strcat(char *dest, char *src)
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
