#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>
#include <stdio.h>

#define BUFFER_SIZE 1024

/**
 * error_exit - Print an error message and exit with a code
 * @exit_code: exit status to end program with
 * @message: error message to print
 * @file_name: filename to include in the message, or NULL
 *
 * Description: Prints an error message to STDERR and exits the program.
 */
void error_exit(int exit_code, const char *message, const char *file_name)
{
    if (file_name)
        dprintf(STDERR_FILENO, "%s %s\n", message, file_name);
    else
        dprintf(STDERR_FILENO, "%s\n", message);
    exit(exit_code);
}

int _putchar(int c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif /* MAIN_H */
