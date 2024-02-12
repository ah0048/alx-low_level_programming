#include "main.h"
/**
 * read_textfile - read from a file
 * @filename: pointer
 * @letters: index
 * Return: int
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;

	ssize_t bytes;

	char buf[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	fd = open(filename, 0_RDONLY);
	if (fd == -1)
		return (0);
	bytes = read(filename, &buf[0], letters);
	bytes = write(STDOUT_FILENO, &buf[0], bytes);
	close(fd);
	return (bytes);
}
