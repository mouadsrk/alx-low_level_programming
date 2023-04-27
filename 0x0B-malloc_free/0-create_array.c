#include <stdlib.h>
/**
 *create_array - function that creates an array of chars
 *@size: number of elemts
 *@c: element
 *Return: NULL or array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array = malloc(size * sizeof(char));

	if (!array || size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
