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
	char *buff;

	if (filename == NULL)
		return (-1);
	while (text_content[len] != '\0')
	{
		len++;
	}
	buff = malloc(sizeof(char) * (len + 1));
	if (buff == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT, 0600);
	if (fd < 0)
	{
		free(buff);
		return (-1);
	}
	w_size = write(fd, buff, len);
	if (w_size < 0)
	{
		free(buff);
		return (-1);
	}
	free(buff);
	close(fd);
	return (1);
}
