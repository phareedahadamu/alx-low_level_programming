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
	int fd, size;
	char buff[5000];

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	if (letters == 0)
		return (0);
	size = read(fd, buff, letters);
	if (size < 0 || size == 0)
		return (0);
	write(STDOUT_FILENO, buff, size);
	close(fd);
	return (size);
}
