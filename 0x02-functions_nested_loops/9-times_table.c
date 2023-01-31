#include "main.h"

/**
* times_table - Prints the 9 times table
* Retuen: nothing
*/
void times_table(void)
{
int n, p;
for (n = 0; n <= 9; n++)
{
for (p = 0; p <= 9; p++)
{
if (n * p > 9)
{
if (p != 0)
{
_putchar(',');
_putchar(' ');
}
_putchar((n * p) / 10 + '0');
_putchar((n * p) % 10 + '0');
}
else
{
if (p != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
}
_putchar((n * p) + '0');
}
}
_putchar('\n');
}
}
