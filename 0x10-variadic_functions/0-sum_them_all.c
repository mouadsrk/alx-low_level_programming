#include "variadic_functions.h"
#include <stdarg.h>
/**
 *sum_them_all - function that returns the sum of all its param
 *@n: number of param
 *Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list pr;
	unsigned int i, sum;

	va_start(pr, n);
	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(pr, int);
	}
	va_end(pr);
	return (sum);
}
