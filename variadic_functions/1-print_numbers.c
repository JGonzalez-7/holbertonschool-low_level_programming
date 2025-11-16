#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Prints numbers separated by a given string
 * @separator: The string printed between numbers
 * @n: The number of integers passed to the function
 *
 * Return: Nothing (void)
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;             /* Holds the list of variable arguments */
	unsigned int i;           /* Loop counter */
	int num;                  /* Variable to store each retrieved number */

	va_start(args, n);        /* Initialize the argument list */

	for (i = 0; i < n; i++)   /* Loop through all provided integers */
	{
		num = va_arg(args, int);  /* Retrieve the next integer */
		printf("%d", num);        /* Print the retrieved number */

		if (separator != NULL && i < n - 1) /* Print separator if valid */
			printf("%s", separator);       /* Print the separator string */
	}

	va_end(args);             /* Clean up argument list */

	printf("\n");             /* Print the final newline */
}
