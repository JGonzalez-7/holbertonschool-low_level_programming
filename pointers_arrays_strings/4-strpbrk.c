#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the string to search in
 * @accept: the string with characters to look for
 *
 * Return: pointer to the first matching character in s,
 * or NULL if no match is found
 */
char *_strpbrk(char *s, char *accept)
{
	int look;

	while (*s != '\0') /* loop through each character in s */
	{
		for (look = 0; accept[look] != '\0'; look++) /* loop through accept */
		{
			if (*s == accept[look]) /* if current s char matches one in accept */
				return (s); /* return pointer to the match */
		}
		s++; /* move to next character in s */
	}

	return (NULL); /* no matches found */
}
