#include "main.h"

/**
* more_numbers - prints 10 times the numbers 0 to 14.
**/
void more_numbers(void)
{
int i, j;
j = 1;

while (j <= 10)
{
for (i = 0; i <= 14; i++)
{
if (i >= 10)
{
_putchar(i / 10 + '0');
}
_putchar(i % 10 + '0');
}
_putchar('\n');
j++;
}
}



