#include "main.h"
/**
 * create_file - read from a file
 * @filename: pointer
 * @text_content: index
 * Return: int
 */
int create_file(const char *filename, char *text_content)
{
	int fd;

	size_t bytes, len = strlen(text_content);

	if (!filename || !text_content)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (len)
		bytes = write(fd, text_content, len);
	close(fd);
	return (bytes);
}
