#include "main.h"

/**
 * print_number -  Print number
 *@n: integer
 */
void print_number(int n)
{
unsigned int n1, n2;
n1 = n;
if (n < 0)
{
_putchar(45);
n1 = -n;
}
if (n1 / 10)
print_number(n1 / 10);
n2 = n1 % 10;
_putchar(n2 + '0');
}
