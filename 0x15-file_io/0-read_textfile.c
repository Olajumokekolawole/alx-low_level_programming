#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - file that reads and prints file
 * @filename: char ptr
 * @letters: struct
 * Return: int
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buff;
	ssize_t rd;
	ssize_t wr;

	if (filename == NULL)
		return (0);

	/*read*/
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);
	rd = read(fd, buff, letters);
	if (rd == -1)
	{
		free(buff);
		return (0);
	}
	/*write */
	wr = write(STDOUT_FILENO, buff, rd);

	if (wr == -1)
	{
		free(buff);
		return (0);
	}
	free(buff);
	close(fd);
	return (wr);
}
