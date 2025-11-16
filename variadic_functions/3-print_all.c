#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints values according to a format string
 * @format: list of types to print (c, i, f, s)
 */ 
void print_all(const char * const format, ...)  /* main variadic function */ 
{
	va_list args;           /* argument list handler */
	unsigned int i = 0;     /* index for format string */
	char *str;              /* temporary string pointer */
	char *sep = "";         /* separator starts empty */

	va_start(args, format); /* initialize args to first optional arg */

	while (format && format[i])  /* loop over format characters */
	{
		switch (format[i])      /* select action based on char */
		{
			case 'c':          /* char: fetch as int, print as char */
				printf("%s%c", sep, va_arg(args, int));
				sep = ", ";   /* after printing, set separator */
				break;        /* done with 'c' case */

			case 'i':          /* integer: fetch and print */
				printf("%s%d", sep, va_arg(args, int));
				sep = ", ";   /* set separator after print */
				break;        /* done with 'i' case */

			case 'f':          /* float: fetch as double, print */
				printf("%s%f", sep, (float)va_arg(args, double));
				sep = ", ";   /* set separator after print */
				break;        /* done with 'f' case */

			case 's':          /* string: fetch pointer and print */
				str = va_arg(args, char *); /* get string */
				if (!str)     /* if NULL, use (nil) */
					str = "(nil)";
				printf("%s%s", sep, str); /* print string */
				sep = ", ";   /* set separator after print */
				break;        /* done with 's' case */

			default:           /* unrecognized format char */
				i++;          /* skip invalid char */
				continue;     /* continue without changing sep */
		}
		i++;                  /* move to next format character */
	}

	va_end(args);             /* clean up the argument list */
	printf("\n");             /* finish output with a newline */
}
