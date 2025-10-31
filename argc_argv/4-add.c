#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: number of command-line arguments
 * @argv: array of argument strings
 *
 * Return: 0 if success, 1 if error
 */
int main(int argc, char *argv[])
{
	int x, y, sum = 0;

	if (argc == 1) /* no extra arguments */
	{
		printf("0\n");
		return (0);
	}

	for (x = 1; x < argc; x++) /* loop through all arguments */
	{
		for (y = 0; argv[x][y] != '\0'; y++) /* check each character */
		{
			if (!isdigit(argv[x][y])) /* if not a digit */
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[x]); /* convert string to int and add it */
	}

	printf("%d\n", sum); /* print the total sum */
	return (0);
}
