#include "main.h"
/**
 * _strlen - read from a file
 * @s: pointer
 * Return: int
 */
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
		i++;
	return (i);
}
/**
 * append_text_to_file - read from a file
 * @filename: pointer
 * @text_content: index
 * Return: int
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	ssize_t bytes = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (len)
		bytes = write(fd, text_content, len);
	close(fd);
	return (bytes == len ? 1 : -1);
}
