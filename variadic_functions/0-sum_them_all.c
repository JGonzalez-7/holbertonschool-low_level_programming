#include <stdarg.h> /* Needed for va_list, va_start, va_arg, va_end */

/**
 * sum_them_all - Returns the sum of all parameters passed
 * @n: The number of arguments that follow
 *
 * Return: The total sum, or 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;        /* Declare a variable to handle the argument list */
	unsigned int i;      /* Loop counter */
	int sum = 0;         /* Variable to store the total sum */

	if (n == 0)          /* Check if no arguments were provided */
		return (0);      /* Return 0 as instructed */

	va_start(args, n);   /* Initialize args to store all values after n */

	for (i = 0; i < n; i++)           /* Loop through all given arguments */
		sum += va_arg(args, int);    /* Retrieve each argument as int and add */

	va_end(args);         /* Clean up the va_list */

	return (sum);         /* Return the computed sum */
}
