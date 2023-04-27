# include "main.h"
# include <stdio.h>

int _sqrt(int n, int a);

/**
 * _sqrt_recursion - returns the natural square root of number
 * @n: number to calculate natural square root
 *
 * Return: the natural square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}


/**
 * _sqrt - function returns natural square root of number
 * @n: number to calculate the square root
 * @a: iterate number
 *
 * Return: natural square root
 */

int _sqrt(int n, int a)
{
	int sqrt = a * a;

	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (a);
	return (_sqrt(n, a + 1));
}
