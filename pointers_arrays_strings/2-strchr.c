#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: pointer to the string to search in
 * @c: character to find in the string
 *
 * Return: pointer to the first occurrence of c in s,
 * or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	/* Loop through the string until the null terminator */
	while (*s != '\0')
	{
		/* Check if the current character matches c */
		if (*s == c)
			return (s); /* Return pointer to the matching character */

		s++; /* Move to the next character in the string */
	}

	/* If searching for '\0', return pointer to end of string */
	if (c == '\0')
		return (s);

	/* If character not found, return NULL */
	return (NULL);
}
