#include "main.h"

/**
 * print_rev - prints a string in reverse.
 * @s: pointer to the string to be reversed
 *
 * Description: This function first finds the length of the string,
 * then prints each character in reverse order using _putchar.
 * Return: void (no return value)
 */
void print_rev(char *s)
{
			/* Declare and initialize a variable to store string length */
	int length = 0;
	int i;

	while (s[length] != '\0') /* Find the length of the string */
	{
		length++; /* Count each character until null terminator */
	}
		/* Loop to print characters in reverse order */
	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]); /* Print each character starting from the end */
	}

	_putchar('\n');
}
