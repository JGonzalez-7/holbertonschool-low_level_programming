#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 *
 * Return: 0 if s1 == s2
 *         negative number if s1 < s2
 *         positive number if s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
	int comp;

	comp = 0;
	while (s1[comp] && s2[comp] && s1[comp] == s2[comp])
	{
		comp++;
	}
	return (s1[comp] - s2[comp]);
}
