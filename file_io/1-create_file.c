#include "main.h"

/**
 * create_file - creates a file with specific permissions and writes text to it
 * @filename: name of the file to create
 * @text_content: NULL-terminated string to write into the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;                 /* file descriptor */
	ssize_t w_bytes;        /* number of bytes written */

	/* if filename is NULL, fail immediately */
	if (filename == NULL)
		return (-1);

	/* open file: write-only, create if not exists, truncate if exists */
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	/* check if file failed to open */
	if (fd == -1)
		return (-1);

	/* if text_content is NULL, treat it as an empty string */
	if (text_content == NULL)
		text_content = "";

	/* write text_content into file */
	w_bytes = write(fd, text_content, strlen(text_content));

	/* check if write failed */
	if (w_bytes == -1)
	{
		close(fd);  /* close file before returning */
		return (-1);
	}

	close(fd);  /* close file */
	return (1);
}
