#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: the number to find the factorial of
 *
 * Return: factorial of n, or -1 if n is negative
 */
int factorial(int n)
{
	if (n < 0)
		return (-1); /* Error: factorial not defined for negatives */

	if (n == 0)
		return (1); /* Base case: 0! = 1 */

	return (n * factorial(n - 1)); /* Recursive case */
}
