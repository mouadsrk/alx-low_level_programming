#include "function_pointers.h"
/**
 *int_index - function that searches for an integer
 *@array: array
 *@size: size
 *@cmp: pointr to funct
 *Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || !cmp || size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 1)
		{
			return (i);
		}
	}
	return (-1);
}
