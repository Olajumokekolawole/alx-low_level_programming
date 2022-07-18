#include "main.h"
/**
* rot13 - function that encodes a string
* @s: char pointer
* Return: char
*/
char *rot13(char *s)
{
	char abc[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == abc[j])
			{
				s[i] = rot[j];
				break;
			}
		}
	}
	return (s);
}
