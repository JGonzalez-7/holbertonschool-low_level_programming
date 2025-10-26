#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: pointer to the string to modify
 *
 * Return: pointer to the modified string
 */
char *cap_string(char *str)
{
	int caps;

	caps = 0;
	while (str[caps] != '\0')
	{
		if (str[caps] >= 'a' && str[caps] <= 'z')
		{
			if (caps == 0 || str[caps - 1] == ' ' || str[caps - 1] == '\t' ||
				str[caps - 1] == '\n' || str[caps - 1] == ',' || str[caps - 1] == ';' ||
				str[caps - 1] == '.' || str[caps - 1] == '!' || str[caps - 1] == '?' ||
				str[caps - 1] == '"' || str[caps - 1] == '(' || str[caps - 1] == ')' ||
				str[caps - 1] == '{' || str[caps - 1] == '}')
			{
				str[caps] = str[caps] - ('a' - 'A'); /* convert to uppercase */
			}
		}
		caps++;
	}

	return (str);
}
