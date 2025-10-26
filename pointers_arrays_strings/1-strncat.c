#include "main.h"

/**
 * _strncat - concatenates up to n characters from src to dest
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * @n: maximum number of characters to append from src
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int line1, line2;

	/* Find the end of dest */
	for (line1 = 0; dest[line1] != '\0'; line1++)
		;

	/* Append at most n characters from src */
	for (line2 = 0; line2 < n && src[line2] != '\0'; line2++)
	{
		dest[line1 + line2] = src[line2];
	}

	/* Add null terminator at the end */
	dest[line1 + line2] = '\0';

	return (dest);
}
