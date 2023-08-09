#include "main.h"

/**
 * create_file - A function that creates a new file and
 *               copies a given string to it
 * @filename: The file
 * @text_content: The string to be copied to the new file
 * Return: 1 on success else -1
 */

int create_file(const char *filename, char *text_content)
{
	int fd, w_size, len = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_TRUNC | O_CREAT, 0600);
	if (fd < 0)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;
		w_size = write(fd, text_content, len);
		if (w_size < 0)
			return (-1);
	}
	close(fd);
	return (1);
}
