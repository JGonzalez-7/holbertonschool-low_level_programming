#include "main.h"

/**
 * rev_string - reverses a string in place
 * @s: pointer to the string to be reversed
 *
 * Description: This function swaps the characters from the start
 * and end of the string until they meet in the middle.
 * Return: void
 */
void rev_string(char *s)
{
	int start = 0;     /* Index for the beginning of the string */
	int end = 0;       /* Index for the end of the string */
	char temp;         /* Temporary variable to store a character */

	/* Find the length of the string */
	while (s[end] != '\0')
	{
		end++;
	}

	end--;

    /* Swap characters from start and end until the middle */
	while (start < end)
	{
		temp = s[start];  /* Save the character at start */
		s[start] = s[end]; /* Move the character from end to start */
		s[end] = temp;     /* Move the saved character to end */

		start++;
		end--;
	}
}
