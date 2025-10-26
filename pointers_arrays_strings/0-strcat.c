#include <stdio.h>

/**
 * _strcat - concatenates the src string to the dest string
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 *
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int line1 = 0, line2 = 0; /* counters for dest and src */

	/* Move i to the end of the dest string */
	while (dest[line1] != '\0')
		line1++;

	/* Copy each character from src to dest */
	while (src[line2] != '\0')
	{
		dest[line1] = src[line2]; /* append character */
		line1++;
		line2++;
	}

	/* Add terminating null byte at the end */
	dest[line1] = '\0';

	return (dest); /* return pointer to dest */
}
