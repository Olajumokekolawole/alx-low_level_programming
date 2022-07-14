#include "main.h"

/**
* _strncpy -  function to copy a string
* @dest: char ptr
* @src: char ptr
* @n: int
* Return: char
*/
char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;

	for (a = 0; (a < n && src[a] != 0); a++)
	{
		dest[a] = src[a];
	}
	for (; a < n; a++)
	{
		dest[a] = '\0';
	}
	return (dest);
}
