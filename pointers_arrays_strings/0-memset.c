#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: pointer to the memory area to be filled
 * @b: the byte to fill the memory with
 * @n: number of bytes to be filled
 *
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int echo;

	for (echo = 0; echo < n; echo++)  /* loop through n bytes */
	{
		s[echo] = b;  /* set each byte to the value of b */
	}

	return (s);  /* return the pointer to the memory area */
}
