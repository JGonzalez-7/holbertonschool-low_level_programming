#include <stdio.h>

/**
 * main - prints numbers 1 to 100 with FizzBuzz rules
 *
 * Description: Prints numbers from 1 to 100.
 * For multiples of 3, prints "Fizz".
 * For multiples of 5, prints "Buzz".
 * For multiples of both 3 and 5, prints "FizzBuzz".
 *
 * Return: Always 0
 */
int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && num % 5 == 0)
			printf("FizzBuzz");
		else if (num % 3 == 0)
			printf("Fizz");
		else if (num % 5 == 0)
			printf("Buzz");
		else
			printf("%d", num);

		if (num < 100)
			printf(" ");
	}

	printf("\n");
	return (0);
}
