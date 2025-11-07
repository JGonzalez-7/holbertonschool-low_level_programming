#include <stdio.h>  /* Include standard input/output library */

/**
 * main - prints numbers from 1 to 100 following FizzBuzz rules
 *
 * Description: For multiples of 3, prints "Fizz"; for multiples of 5, prints
 * "Buzz"; for numbers divisible by both 3 and 5, prints "FizzBuzz". Each
 * number or word is separated by a space and ends with a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;  /* Variable to store current number */

	for (num = 1; num <= 100; num++)  /* Loop from 1 to 100 */
	{
		if (num % 3 == 0 && num % 5 == 0)  /* If divisible by both 3 and 5 */
			printf("FizzBuzz");  /* Print FizzBuzz */
		else if (num % 3 == 0)  /* If divisible by 3 only */
			printf("Fizz");  /* Print Fizz */
		else if (num % 5 == 0)  /* If divisible by 5 only */
			printf("Buzz");  /* Print Buzz */
		else
			printf("%d", num);  /* Otherwise, print the number */

		if (num < 100)  /* Add a space after each output except the last one */
			printf(" ");
	}

	printf("\n");  /* Print newline at the end */
	return (0);  /* Indicate successful program execution */
}
