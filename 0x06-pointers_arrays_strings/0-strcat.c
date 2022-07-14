#include "main.h"

/**
* char *_strcat - function to concatenate two strings
*
* Return: Always 0.
*/

char *_strcat(char *dest, char *src)
{
	char s1[58] = "Olajumoke ";
	char s2[] = "Kolawole\n";
	char *ptr;

	printf("%s\n", s1);
	printf("%s", s2);
	ptr = _strcat(s1, s2);
	printf("%s", s1);
	printf("%s", s2);
	printf("%s", ptr);
	return (0);
}
