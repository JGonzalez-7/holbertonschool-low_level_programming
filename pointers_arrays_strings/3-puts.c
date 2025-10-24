#include "main.h"

/**
 * _puts - prints a string.
 * @str: pointer to the string to print
 *
 * Description: This function prints each character of a string using _putchar.
 * Return: void (no return value)
 */
void _puts(char *str)
{
	int i; /* Declare variable to count through the string */

	i = 0; /* Initialize counter to 0 */

	while (str[i] != '\0') /* Loop through the string until the null terminator */
	{
		_putchar(str[i]); /* Print each character */
		i++; /* Move to the next character */
	}

	_putchar('\n');
}
