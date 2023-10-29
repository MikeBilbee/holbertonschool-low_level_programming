#include "function_pointers.h"
/**
 * print_name - prints it name
 * @name: Pointer to name
 * @f: pointer to function
 * Return: None
*/
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
	{
		;
	}
	f(name);
}
