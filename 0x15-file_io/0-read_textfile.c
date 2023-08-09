#include "main.h"

/**
 * read_textfile- A function that reads from an existing file and
 *                writes to stdout
 * @filename: The file to be read from
 * @letters: The number of characters to be read
 * Return: The number of characters written
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, r_size, w_size;
	char *buff;

	if (filename == NULL)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		free(buff);
		return (0);
	}
	r_size = read(fd, buff, letters);
	if (r_size < 0)
	{
		free(buff);
		return (0);
	}
	w_size = write(STDOUT_FILENO, buff, r_size);
	if (w_size < 0 || w_size != r_size)
	{
		free(buff);
		return (0);
	}
	free(buff);
	close(fd);
	return (w_size);
}
