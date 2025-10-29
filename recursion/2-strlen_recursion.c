#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: pointer to the string
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')   /* Base case: end of string */
		return (0);

	return 1 + _strlen_recursion (s + 1); /* Count 1 + length of rest */
}
