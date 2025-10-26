#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: pointer to the string to modify
 *
 * Return: pointer to the modified string
 */
char *leet(char *str)
{
	int alph, digit;
	char letters[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";

	for (alph = 0; str[alph] != '\0'; alph++)
	{
		for (digit = 0; letters[digit] != '\0'; digit++)
		{
			if (str[alph] == letters[digit])
			{
				str[alph] = numbers[digit];
				break; /* stop inner loop once a replacement is done */
			}
		}
	}

	return (str);
}
