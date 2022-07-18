#include "main.h"

/**
* _strpbrk - Searches string for any of set of bytes.
* @s: string to be searched.
* @accept: set of bytes to be searched for.
*
* Return: If a set is matched - pointer to the matched byte.
* If no set is matched - NULL.
*/

char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}

		s++;
	}
	return ('\0');
}
