#include <stdlib.h>
/**
 *malloc_checked - allocates memory using malloc
 *@b: num
 *Return: void
 */
void *malloc_checked(unsigned int b)
{
	int *m;

	m = malloc(b);
	if (!m)
	{
		exit(98);
	}
	return (m);
}
