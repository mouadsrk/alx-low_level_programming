# include "main.h"

/**
 * _strlen_recursion - function returns the length of a string
 * @s: the string to calcul length
 *
 * Return: value
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	s++;
	return (_strlen_recursion(s) + 1);
}
