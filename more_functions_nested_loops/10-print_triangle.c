#include "main.h"

/**
 * print_triangle - prints a triangle of '#' characters
 * @size: size of the triangle
 *
 * Description: Prints a right-aligned triangle made of '#'.
 * If size is 0 or less, it prints only a new line.
 *
 * Return: void
 */
void print_triangle(int size)
{
	int row, space;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (row = 1; row <= size; row++)
	{
		for (space = 1; space <= size; space++)
		{
			if (space <= size - row)
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}
