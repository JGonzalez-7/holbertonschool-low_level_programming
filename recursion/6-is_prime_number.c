#include "main.h"

/**
 * check_prime - helper function to check if n is divisible by any number
 * @n: number to check
 * @div: current divisor being tested
 *
 * Return: 1 if prime, 0 if not
 */
int check_prime(int n, int div)
{
	if (div * div > n)
		return (1); /* no divisor found, n is prime */

	if (n % div == 0)
		return (0); /* found a divisor, n is not prime */

	return (check_prime(n, div + 1)); /* test next divisor */
}

/**
 * is_prime_number - checks if a number is a prime number
 * @n: number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0); /* numbers <= 1 are not prime */

	return (check_prime(n, 2)); /* start checking from 2 */
}
