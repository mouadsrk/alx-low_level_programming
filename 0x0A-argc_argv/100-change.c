#include <stdio.h>
#include <stdlib.h>
/**
 *main - prints the minimum number of coins
 *@argc: number of args
 *@argv: Point to the string of args
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 0, n = 0, min;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (0);
	}
	min = atoi(argv[1]);
	while (min >= 1)
	{
		while (min >= coins[i])
		{
			min -= coins[i];
			n++;
		}
		i++;
	}
	printf("%d\n", n);
	return (0);
}
