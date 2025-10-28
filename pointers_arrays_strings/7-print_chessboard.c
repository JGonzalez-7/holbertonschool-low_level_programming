#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - prints the chessboard
 * @a: pointer to a 2D array (8x8) representing the chessboard
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int row, col;

	for (row = 0; row < 8; row++) /* loop through rows */
	{
		for (col = 0; col < 8; col++) /* loop through columns */
		{
			_putchar(a[row][col]); /* print each character */
		}
		_putchar('\n'); /* new line after each row */
	}
}
