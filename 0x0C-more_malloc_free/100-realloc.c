#include <stdlib.h>
/**
 *_realloc - reallocates a memory block using malloc and free
 *@ptr: pointer
 *@old_size: old size
 *@new_size: new size
 *Return: void
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *np, *op;
	unsigned int i;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
	{
		return (malloc(new_size));
	}
	np = malloc(new_size);
	if (!np)
	{
		return (NULL);
	}
	op = ptr;
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
		{
			np[i] = op[i];
		}
	}
	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
		{
			np[i] = op[i];
		}
	}
	free(ptr);
	return (np);
}
