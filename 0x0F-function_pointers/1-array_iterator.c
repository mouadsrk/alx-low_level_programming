#include "function_pointers.h"
/**
 *array_iterator - executes a funct given as a param on each elemt of an array
 *@array: array
 *@size: size
 *@action: pointer to funct
 *Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action == NULL || array == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
