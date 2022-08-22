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
 * create_file - function that creates file
 * @filename: char ptr
 * @text_content: char ptr
 * Return: int
*/

int create_file(const char *filename, char *text_content)
{
	int fd;
	int wr;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);
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
