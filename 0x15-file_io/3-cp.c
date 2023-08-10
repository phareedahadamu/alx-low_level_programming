#include "main.h"
#include <stdio.h>

/**
 * dup_file - A function that copies the content of one file to another
 * @file1: The file to be copied from
 * @file2: The file to be copied to
 */
void dup_file(const char *file1, const char *file2)
{
	int fd1, fd2, r_size, w_size, cl1, cl2;
	char *buff;

	if (file1 == NULL || file2 == NULL)
		exit(0);
	buff = malloc(sizeof(char) * 1024);
	if (buff == NULL)
		exit(0);
	fd1 = open(file1, O_RDONLY);
	fd2 = open(file2, O_WRONLY | O_TRUNC | O_CREAT, 0664);
	r_size = read(fd1, buff, 1024);
	w_size = write(fd2, buff, r_size);
	if (fd1 < 0 || r_size < 0)
	{
		dprintf(2, "Error: Can't read from file %s\n", file1);
		free(buff);
		exit(98);
	}
	if (fd2 < 0 || w_size < 0)
	{
		dprintf(2, "Error: Can't write to %s\n", file2);
		free(buff);
		exit(99);
	}
	free(buff);
	cl1 = close(fd1);
	cl2 = close(fd2);
	if (cl1 < 0)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	if (cl2 < 0)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
}

/**
 * main - Main Entry
 * @ac: Arg count
 * @av: Arg vector
 * Return: 0 on success
 */
int main(int ac, char **av)
{
	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(1);
	}
	dup_file(av[1], av[2]);
	return (0);
}
