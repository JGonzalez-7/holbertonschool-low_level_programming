#include <stdio.h>

/**
 * main - prints the program's name
 * @argc: number of command-line arguments
 * @argv: array of strings containing the arguments
 *
 * Return: Always 0 (success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
