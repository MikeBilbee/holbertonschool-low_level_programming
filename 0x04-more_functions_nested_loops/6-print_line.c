#include "main.h"

/**
 * print_line - draws a straight line
 * @n: number of times
 *Return: Always 0
 */
void print_line(int n)
{
int times = n;
for (times = n; times > 0; times--)
_putchar('_');
_putchar('\n');
}
