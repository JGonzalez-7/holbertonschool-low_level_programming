#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer to the string
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')  /*loop until the end of the string*/
	{
		length++;              /*count each character*/
	}
	return (length);           /*return the total count*/
}
