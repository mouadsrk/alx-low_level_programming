#include <stdlib.h>
/**
 *string_nconcat - concatenates two strings
 *@s1: str1
 *@s2: str2
 *@n: int
 *Return: str
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i = 0, j = 0, j1 = 0;

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
	str = malloc(sizeof(char) * (j1 + n) + 1);
	if (!str)
	{
		return (NULL);
	}
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (j < n)
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}
