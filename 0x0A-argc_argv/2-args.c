#include <stdio.h>
/**
 *main - print all arguments
 *@argc: number of args
 *@argv: Point to the string of args
 *Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
