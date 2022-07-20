#include "main.h"

int find_strlen(char *s);
int check_palindrome(char *s, int len, int index);
int is_palindrome(char *s);

/**
* find_strlen - Returns length of a string.
* @s: string to be measured.
*
* Return: length of string.
*/

int find_strlen(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
		len += find_strlen(s + len);
	}

	return (len);
}

/**
* check_palindrome - Checks if string is a palindrome.
* @s: string to be checked.
* @len: length of s.
* @index: index of string to be checked.
*
* Return: If string is a palindrome - 1.
* If the string is not a palindrome - 0.
*/

int check_palindrome(char *s, int len, int index)
{
	if (s[index] == s[len / 2])
		return (1);

	if (s[index] == s[len - index - 1])
		return (check_palindrome(s, len, index + 1));

	return (0);
}

/**
* is_palindrome - Checks if string is a palindrome.
* @s: string to be checked.
*
* Return: If string is a palindrome - 1.
* If the string is not a palindrome - 0.
*/
int is_palindrome(char *s)
{
	int index = 0;
	int len = find_strlen(s);

	if (!(*s))
		return (1);

	return (check_palindrome(s, len, index));
}
