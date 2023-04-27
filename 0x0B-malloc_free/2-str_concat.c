#include <stdlib.h>
/**
 *str_concat - concatenates two strings
 *@s1: str1
 *@s2: str2
 *Return: str
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int i, j, j1, j2;

	i = j = j1 = j2 = 0;
	if (!s1)
	{
		s1 = "";
	}
	if (!s2)
	{
		s2 = "";
	}
	while (s1[j1])
	{
		j1++;
	}
	while (s2[j2])
	{
		j2++;
	}
	str = malloc(sizeof(char) * (j1 + j2 + 1));
	if (!str)
	{
		return (NULL);
	}
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		str[i] = s2[j];
		j++;
		i++;
	}
	str[i] = '\0';
	return (str);
}
