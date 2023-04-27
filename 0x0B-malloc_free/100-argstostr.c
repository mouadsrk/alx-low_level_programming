#include <stdlib.h>
/**
 *argstostr - concatenates all the arguments of your program
 *@ac: num
 *@av: 2d arr
 *Return: s
 */
char *argstostr(int ac, char **av)
{
	int i, j, l, len;
	char *s;

	len = l = j = i = 0;
	if (!av || ac == 0)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		while (av[i][j])
		{
			len++;
			j++;
		}
	}
	s = malloc(sizeof(char) * len + (ac + 1));
	j = 0;
	for (i = 0; i < ac; i++)
	{
		while (av[i][j])
		{
			s[l] = av[i][j];
			l++;
		}
	}
	if (s[l] == '\0')
	{
		s[l + 1] = '\n';
	}
	return (s);
}
