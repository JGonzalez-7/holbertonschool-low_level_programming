#include "main.h"
#include <stdio.h>

/**
 * _strstr - locates a substring within a string
 * @haystack: the string to search in
 * @needle: the substring to find
 *
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int look;

	if (*needle == '\0') /* if needle is empty, return haystack */
		return (haystack);

	while (*haystack != '\0') /* loop through haystack */
	{
		look = 0;

		/* check if substring matches */
		while (needle[look] != '\0' && haystack[look] == needle[look])
			look++;

		if (needle[look] == '\0') /* full match found */
			return (haystack);

		haystack++; /* move to next character in haystack */
	}

	return (NULL); /* no match found */
}
