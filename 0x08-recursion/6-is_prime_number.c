# include "main.h"
# include <stdio.h>

int check_prime(int n, int b);

/**
 * is_prime_number - returns if a number is prime
 * @n: the number to be checked
 *
 * Return: value
 */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * check_prime - check if number is prime
 * @n: the number to be checked
 * @b: the iteration times
 *
 * Return: 1 for prime or 0 composite
 */

int check_prime(int n, int b)
{
	if (n <= 1)
		return (0);
	if (n % b == 0 && b > 1)
		return (0);
	if ((n / b) < b)
		return (1);
	return (check_prime(n, b + 1));
}
