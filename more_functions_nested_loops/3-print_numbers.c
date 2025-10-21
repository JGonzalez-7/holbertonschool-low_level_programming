#include "main.h"

/**
 * print_numbers - prints the numbers from 0 to 9
 *
 * Description: Prints the digits 0–9 using _putchar,then prints a new line.
 *
 * Return: void (nothing is returned)
 */

void print_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0' + num);
	}
	_putchar('\n');
}
