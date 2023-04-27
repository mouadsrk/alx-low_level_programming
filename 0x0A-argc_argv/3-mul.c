#include <stdio.h>
#include <stdlib.h>
/**
 *main - multiplies the second number
 *@argc: number of args
 *@argv: Point to the string of args
 *Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int m;

	if (argc >= 3)
	{
		m = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", m);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
