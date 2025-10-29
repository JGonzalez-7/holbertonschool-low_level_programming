#include "main.h"

/**
 * _puts_recursion - prints a string followed by a new line
 * @s: pointer to the string to print
 *
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	if (*s == '\0') /* Base case: end of the string */
	{
		_putchar('\n'); /* Print new line at the end */
		return; /* Stop recursion */
	}

	_putchar(*s); /* Print current character */
	_puts_recursion(s + 1); /* Move to the next character */
}
