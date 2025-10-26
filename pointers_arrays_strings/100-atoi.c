#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: pointer to the string to convert
 *
 * Description: Finds the first number in a string,
 * handles multiple + or - signs before it, and returns its integer value.
 *
 * Return: the integer value found, or 0 if no number is present
 */
int _atoi(char *s)
{
	int sign = 1; /* holds sign (+ or -) */
	unsigned int num = 0; /* holds the number result */

	/* Loop through the string */
	while (*s)
	{
		if (*s == '-') /* if a '-' is found, flip the sign */
			sign *= -1;
		else if (*s >= '0' && *s <= '9') /* if a digit is found */
		{
			/* build the number */
			num = (num * 10) + (*s - '0');

			/* check next characters for more digits */
			if (*(s + 1) < '0' || *(s + 1) > '9')
			break;
		}
		s++; /* move to next character */
	}

	return (num * sign);
}
