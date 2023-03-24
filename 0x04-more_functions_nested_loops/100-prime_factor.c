#include <stdio.h>

/**
 * main - main
 *
 * Return: 0
 */

int main(void)
{
long n, m, largestPrim;
n = 612852475143;
m = 2;
largestPrim = 0;

do {
if (n % m == 0)
{
n = n / m;
largestPrim = m;
}
m += 1;
} while (n != 1);
printf("%ld\n", largestPrim);
return (0);
}
