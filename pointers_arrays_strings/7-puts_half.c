#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: pointer to the string
 *
 * Description: If the number of characters is even,
 * it prints the last half of the string.
 * If it's odd, it prints from (length + 1) / 2 to the end.
 * Return: void (no return value)
 */
void puts_half(char *str)
{
	int length = 0; /* Variable to count the string length */
	int start;      /* Variable for where to start printing */

	/* Find the length of the string */
	while (str[length] != '\0')
	{
		length++;
	}

	/* Calculate where to start printing */
	if (length % 2 == 0)
		start = length / 2;         /* even length */
	else
		start = (length + 1) / 2;   /* odd length */

	/* Print from the middle to the end */
	while (str[start] != '\0')
	{
		_putchar(str[start]);
		start++;
	}

	_putchar('\n');
}
