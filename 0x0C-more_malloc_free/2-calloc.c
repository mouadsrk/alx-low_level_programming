#include <stdlib.h>
/**
 *_calloc - allocates memory for an array, using malloc
 *@nmemb: num1
 *@size: num1
 *Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	char *arr = malloc(nmemb * size);

	if (!arr || nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	while (i < nmemb * size)
	{
		arr[i] = 0;
		i++;
	}
	return (arr);
}
