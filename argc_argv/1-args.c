#include "main.h"
/**
 * main - prints the number of arguments passed to it
 * @argc: argument
 * @argv: argument
 * Return: Alwyas 0
*/
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
