#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - Prints result of simple operations
 * @argc: String
 * @argv: Array of strings
 * Return: 0
 */
int main(int argc, char *argv[])
{
int (*i)(int, int);

if (argc != 4)
{
printf("Error\n");
exit(98);
}

i = (*get_op_func(argv[2]));
if (i == NULL)
{
printf("Error\n");
exit(99);
}
printf("%d\n", i(atoi(argv[1]), atoi(argv[3])));

return (0);
}
