#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: pointer to the string to print
 *
 * Description: Starts at index 0 and prints every second character
 * (index 0, 2, 4, etc.), then prints a newline at the end.
 * Return: void (no return value)
 */
void puts2(char *str)
{
	int i = 0; /* Counter for string index */

	/* Loop through string until null terminator */
	while (str[i] != '\0')
	{
		/* Print only characters with even index */
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}

	_putchar('\n');
}
