#include "main.h"

/**
 * append_text_to_file - appends text to the end of a file
 * @filename: name of the file
 * @text_content: NULL-terminated string to append
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;          /* file descriptor */
	int len = 0;     /* length of text_content */
	int w;           /* write return value */

	if (filename == NULL)           /* file name missing */
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);  /* open file for appending */

	if (fd == -1)                    /* file does not exist OR no permission */
		return (-1);

	if (text_content == NULL)        /* nothing to write, but file exists */
	{
		close(fd);               /* close the file */
		return (1);              /* success */
	}

	while (text_content[len] != '\0') /* calculate string length */
		len++;

	w = write(fd, text_content, len); /* write full string to file */

	if (w == -1)                      /* write failed */
	{
		close(fd);                 /* close before leaving */
		return (-1);
	}

	close(fd);                        /* close file after successful write */
	return (1);
}
