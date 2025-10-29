#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer to the first element of the square matrix
 * @size: size of the matrix (number of rows and columns)
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int diagsums;
	int sum1 = 0;
	int sum2 = 0;

	for (diagsums = 0; diagsums < size; diagsums++)
	{
		sum1 += a[diagsums * size + diagsums]; /* main diagonal */
		sum2 += a[diagsums * size + (size - 1 - diagsums)]; /* secondary diagonal */
	}

	printf("%d, %d\n", sum1, sum2);
}
