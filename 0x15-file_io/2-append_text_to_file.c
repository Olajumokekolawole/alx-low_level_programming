#include "main.h"

/**
 * _strlen - function that counts number of char in string
 * @str: char ptr
 * Return: int
*/

int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * append_text_to_file - appends text at end of file
 * @filename: char ptr
 * @text_content: char ptr
 * Return: int
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int wr;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		close(fd);
		return (-1);
	}
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	wr = write(fd, text_content, _strlen(text_content));
	close(fd);
	if (wr == -1)
		return (-1);
	return (1);
}
