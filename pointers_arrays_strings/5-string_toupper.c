#include "main.h"

/**
 * string_toupper - converts all lowercase letters of a string to uppercase
 * @str: pointer to the string to modify
 *
 * Return: pointer to the modified string
 */
char *string_toupper(char *str)
{
	int letter;

	letter = 0;
	while (str[letter] != '\0')
	{
		if (str[letter] >= 'a' && str[letter] <= 'z')
			str[letter] = str[letter] - ('a' - 'A'); /* convert to uppercase */
		letter++;
	}

	return (str);
}
