#include "variadic_functions.h"
/**
* sum_them_all - returns the sum of all its parameters
* @n: arguments passed
* Return: Sum of parameters
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list new;
	size_t index;
	int sum = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(new, n);

	for (index = 0; index < n; index++)
	{
		sum += va_arg(new, int);
	}

	va_end(new);

	return (sum);
}
