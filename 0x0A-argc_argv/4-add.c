#include <stdio.h>
#include <stdlib.h>
/**
 *is_num - check if str contains number
 *@s: str
 *Return: Always 0(Success)
 */
int is_num(char *s)
{
	while (*s)
	{
		if (*s >= 48 && *s <= 57)
		{
			s++;
		}
		else
		{
			return (1);
		}
	}
	return (0);
}
/**
 *main - add positive numbers
 *@argc: number of args
 *@argv: Point to the string of args
 *Return: Always 0(Success)
 */
int main(int argc, char *argv[])
{
	int sum = 0, i;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (is_num(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
