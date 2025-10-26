#include "main.h"

/**
 * _strcpy - copies the string from src to dest, including '\0'
 * @dest: pointer to destination buffer
 * @src: pointer to source string
 *
 * Description: Copies all characters from src into dest,
 * including the null terminator '\0'.
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int e;

	/* Copy characters from src to dest */
	for (e = 0; src[e] != '\0'; e++)
	{
		dest[e] = src[e];
	}

	/* Copy the null terminator at the end */
	dest[e] = '\0';

	/* Return pointer to destination */
	return (dest);
}
