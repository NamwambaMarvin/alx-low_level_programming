#include "3-calc.h"
/**
 * main - Performs operations
 * @argc: - Number of arguments
 * @argv: Arguments in form of array
 * Return: - Answer inform of an integer
 */
int main(int argc, char *argv[])
{
	int a, b;
	char *op;
	int (*calc)(int, int);

	a = atoi(argv[1]);
	op = argv[2];
	b = atoi(argv[3]);
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	calc = get_op_func(op);
	if (!calc)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", calc(a, b));
	return (0);
}
