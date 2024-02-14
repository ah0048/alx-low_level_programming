#include "main.h"
#define USAGE "Usage: cp file_from file_to\n"
#define ERR_NOREAD "Error: Can't read from %s\n"
#define ERR_NOWRITE "Error: Can't write to %s\n"
#define ERR_NOCLOSE "Error: Can't close fd %d\n"
#define PERSMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)
/**
 * main - read from a file
 * @ac: pointer
 * @av: name of arg
 * Return: int
 */
int main(int ac, char **av)
{
	int from_fd = 0, to_fd = 0;

	ssize_t bytes = 0;

	char buf[READ_BUF_SIZE];

	if (ac != 3)
		dprintf(STDERR_FILENO, USAGE), exit(97);
	from_fd = open(av[1], O_RDONLY);
	if (from_fd == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, av[1]), exit(98);
	to_fd = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, PERSMISSIONS);
	if (to_fd == -1)
		dprintf(STDERR_FILENO, ERR_NOWRITE, av[2]), exit(99);
	while ((bytes = read(from_fd, buf, READ_BUF_SIZE)) > 0)
		if (write(to_fd, buf, bytes) != bytes)
			dprintf(STDERR_FILENO, ERR_NOWRITE, av[2]), exit(99);
	if (bytes == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, av[1]), exit(98);
	close(from_fd);
	close(to_fd);
	if (from_fd)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, from_fd), exit(100);
	if (to_fd)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, to_fd), exit(100);
	return (1);
}
