#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: base number
 * @y: exponent
 *
 * Return: the result of x raised to the power of y, or -1 if y is negative
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1); /* Error: negative exponent not allowed */

	if (y == 0)
		return (1); /* Base case: x^0 = 1 */

	return (x * _pow_recursion(x, y - 1)); /* Recursive case */
}
