#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints anything depending on format
 * @format: A list of types of arguments
 *
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	va_list args;          /* Argument list */
	unsigned int i = 0;    /* Index to loop through format string */
	char *str;             /* String holder */
	char *sep = "";        /* Separator printed before each element */

	va_start(args, format); /* Initialize argument list */

	while (format && format[i])  /* First while loop */
	{
		switch (format[i])        /* Check the format character */
		{
			case 'c':             /* Char type */
				printf("%s%c", sep, va_arg(args, int));
				break;

			case 'i':             /* Integer type */
				printf("%s%d", sep, va_arg(args, int));
				break;

			case 'f':             /* Float type */
				printf("%s%f", sep, (float)va_arg(args, double));
				break;

			case 's':             /* String type */
				str = va_arg(args, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", sep, str);
				break;
		}

		sep = ", ";              /* Set the separator after first value */
		i++;                    /* Move to next format character */
	}

	va_end(args);              /* Cleanup the argument list */
	printf("\n");              /* Print final newline */
}
