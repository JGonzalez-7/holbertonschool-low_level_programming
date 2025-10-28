#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to search in
 * @accept: the string containing accepted characters
 *
 * Return: the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int len;

	while (*s != '\0') /* loop through each char in s */
	{
		for (len = 0; accept[len] != '\0'; len++) /* loop through accept */
		{
			if (*s == accept[len]) /* if current char matches one in accept */
			{
				count++; /* increment counter */
				break; /* stop inner loop and move to next s */
			}
		}
		if (accept[len] == '\0') /* if no match found in accept */
			break;
		s++; /* move to next character in s */
	}
	return (count);
}
