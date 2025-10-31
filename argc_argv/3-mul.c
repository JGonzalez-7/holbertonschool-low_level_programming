#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers given as arguments
 * @argc: number of command-line arguments
 * @argv: array of argument strings
 *
 * Return: 0 if success, 1 if error
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3) /* check if exactly two numbers were given */
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]); /* convert first argument to integer */
	num2 = atoi(argv[2]); /* convert second argument to integer */
	result = num1 * num2; /* multiply the two numbers */

	printf("%d\n", result); /* print the result */
	return (0);
}
