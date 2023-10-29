#include "3-calc.h"
/**
 * main - prints result of simple operations
 * @argc: string
 * @argv: array of strings
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int (*index)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	index = (*get_op_func(argv[2]));
	if (!index)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", index(atoi(argv[1]), atoi(argv[3])));

	return (0);
}
