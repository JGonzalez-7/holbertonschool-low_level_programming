#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks for uppercase characters
 * @c: the character to check
 *
 * Return: 1 if c is uppercase, 0 if its not
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}
