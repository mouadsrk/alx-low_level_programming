#include "3-calc.h"
/**
 *main - main function
 *@argc: number of args
 *@argv: Point to the string of args
 *Return: Always 0(Success)
 */
int main(int argc, char *argv[])
{
	int i, j, res;
	char op;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	i = atoi(argv[1]);
	j = atoi(argv[3]);
	func = get_op_func(argv[2]);
	if (!func)
	{
		printf("Error\n");
		exit(99);
	}
	op = *argv[2];
	if (j == 0 && (op == '/' || op == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	res = func(i, j);
	printf("%d\n", res);
	return (0);
}
