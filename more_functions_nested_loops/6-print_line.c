#include "main.h"

/**
 * print_line - prints a straight line using '_'
 * @n: number of times '_' is printed
 *
 * Return: void
 */

void print_line(int n)
{
		int line;

		for (line = 0; line < n; line++)
		{
			_putchar('_');
		}
		_putchar('\n');

}
