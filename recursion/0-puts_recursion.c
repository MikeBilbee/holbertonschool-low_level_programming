#include "main.h"
/**
 * _puts_recursion - prints a string
 * @s: pointer to string
 * Return: Void
*/
void _puts_recursion(char *s)
{
	if (*s == '\0') 
	{
        return;
    }
    _puts_recursion(s + 1);
    _putchar(*s);
}
