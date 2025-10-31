#include <stdio.h>

/**
 * main - prints all arguments passed to the program
 * @argc: number of command-line arguments
 * @argv: array of strings containing the arguments
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}

	return (0);
}
