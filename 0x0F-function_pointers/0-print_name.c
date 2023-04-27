#include "function_pointers.h"
/**
 *print_name - function that prints a name
 *@name: name
 *@f: pointer to funct
 *Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (!f)
	{
		return;
	}
	f(name);
}
