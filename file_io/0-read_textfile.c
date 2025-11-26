#include "main.h"
#include <unistd.h>	/* for read, write, close */
#include <fcntl.h>	/* for open */
#include <stdlib.h>	/* for malloc */

/**
 * read_textfile - reads a file and prints it to stdout
 * @filename: name of the file to read
 * @letters: number of bytes to read and print
 *
 * Return: actual number of bytes read and printed, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;			/* file descriptor */
	ssize_t r, w;		/* bytes read and written */
	char *buffer;		/* memory to store file content */

	if (filename == NULL)	/* check filename */
		return (0);

	fd = open(filename, O_RDONLY);	/* open file for reading */
	if (fd == -1)		/* failed to open */
		return (0);

	buffer = malloc(sizeof(char) * letters);	/* allocate buffer */
	if (buffer == NULL)	/* malloc failed */
	{
		close(fd);
		return (0);
	}

	r = read(fd, buffer, letters);	/* read from file */
	if (r == -1)		/* read failed */
	{
		free(buffer);
		close(fd);
		return (0);
	}

	w = write(STDOUT_FILENO, buffer, r);	/* write to stdout */
	if (w == -1 || w != r)	/* write failed or incomplete */
	{
		free(buffer);
		close(fd);
		return (0);
	}

	free(buffer);		/* free memory */
	close(fd);		/* close file */

	return (w);		/* return bytes written */
}
