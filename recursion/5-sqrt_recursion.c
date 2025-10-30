#include "main.h"

/**
 * _sqrt_helper - helps to find the natural square root recursively
 * @n: number to find the square root of
 * @sqr: current number to test as the square root
 *
 * Return: the natural square root, or -1 if not found
 */
int _sqrt_helper(int n, int sqr)
{
	if (sqr * sqr == n)
		return (sqr); /* Found the square root */

	if (sqr * sqr > n)
		return (-1); /* No natural square root exists */

	return (_sqrt_helper(n, sqr + 1)); /* Try next number */
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to find the square root of
 *
 * Return: the natural square root, or -1 if not found
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1); /* Negative numbers don’t have real roots */

	return (_sqrt_helper(n, 0)); /* Start checking from 0 */
}
