#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - Prints a name
 * @name: Pointer to name
 * @f: Pointer to print funtion
 */
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;
f(name);
}
