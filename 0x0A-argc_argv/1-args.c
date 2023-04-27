#include <stdio.h>
/**
 *main - Entry point
 *@argc: number of args
 *@argv: Point to the string of args
 *Return: Always 0 (Success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
