#include "main.h"
/**
 * main - multiplies two numbers
 * @argc: argument
 * @argv: argument
 * Return: 0, otherwise 1
*/
int main(int argc, char *argv[])
{
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);
	int prd = a * b;

	if (argc != 3)
	{
		printf("ERROR\n");
		return (1);
	}

	printf("%d\n", prd);

	return (0);
}
