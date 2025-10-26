#include "main.h"

/**
 * _strncpy - copies at most n characters from src to dest
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * @n: maximum number of characters to copy
 *
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/* Copy characters from src to dest */
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	/* If src is shorter than n, pad dest with null bytes */
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
