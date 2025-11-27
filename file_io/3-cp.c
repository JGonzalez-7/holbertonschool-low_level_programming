#include "main.h"

/**
 * main - copies the content of one file to another
 * @ac: argument count
 * @av: argument vector
 *
 * Return: 0 on success
 */
int main(int ac, char **av)
{
	int fd_from, fd_to, r, w;	/* file descriptors and counters */
	char buf[1024];		/* 1KB buffer */

	if (ac != 3)		/* check argument count */
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	fd_from = open(av[1], O_RDONLY);	/* open source file */
	if (fd_from == -1)	/* check if open failed */
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);

	fd_to = open(av[2],
		O_WRONLY | O_CREAT | O_TRUNC, 0664);	/* open/create output file */
	if (fd_to == -1)	/* check if creation failed */
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);

	while ((r = read(fd_from, buf, 1024)) > 0)	/* read in chunks */
	{
		w = write(fd_to, buf, r);	/* write chunk to output file */
		if (w != r)	/* check write failure */
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	}

	if (r == -1)		/* read error */
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);

	if (close(fd_from) == -1)	/* close source */
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from), exit(100);

	if (close(fd_to) == -1)	/* close destination */
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to), exit(100);

	return (0);	
}
