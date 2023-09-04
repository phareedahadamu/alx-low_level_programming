#include "main.h"

/**
 * append_text_to_file - A function that appends a string to an
 *                       existing file
 * @filename: The file
 * @text_content: The string to be appended
 * Return: 1 on success else -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len = 0, w_size;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
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
