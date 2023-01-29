#include <stdio.h>

/**
* main - Prints the lowercase alphabet in reverse.
*
* Return: always 0
*/
int main(void)
{
char z;
for (z = 'z'; z >= 'a'; z--)
putchar(z);
putchar('\n');
return (0);
}
