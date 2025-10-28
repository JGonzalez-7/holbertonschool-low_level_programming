#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: pointer to the destination memory area
 * @src: pointer to the source memory area
 * @n: number of bytes to copy
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	/* variable called echo that can only hold non negative whole numbers */
	unsigned int echo;

	for (echo = 0; echo < n; echo++) /* loop through n bytes */
	{
		dest[echo] = src[echo];  /* copy each byte from src to dest */
	}

	return (dest);  /* return pointer to dest */
}
