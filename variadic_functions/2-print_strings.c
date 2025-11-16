#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Prints strings separated by a given separator
 * @separator: String printed between the strings
 * @n: Number of strings passed to the function
 *
 * Return: Nothing (void)
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;                  /* List of variable arguments */
	unsigned int i;               /* Loop counter */
	char *str;                    /* Pointer to each retrieved string */

	va_start(args, n);            /* Initialize argument list */

	for (i = 0; i < n; i++)       /* Loop through all provided strings */
	{
		str = va_arg(args, char *);  /* Get next string argument */

		if (str == NULL)             /* Check if string is NULL */
			printf("(nil)");         /* Print (nil) for NULL string */
		else
			printf("%s", str);       /* Print the actual string */

		if (separator != NULL && i < n - 1) /* Print separator if valid */
			printf("%s", separator);        /* Print the separator */
	}

	va_end(args);                 /* Clean up argument list */

	printf("\n");                /* Print the final newline */
}
