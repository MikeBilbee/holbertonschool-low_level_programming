#include "variadic_functions.h"
/**
* print_numbers - prints numbers
* @separator: string to be printed
* @n: arguments passed
* Return: None
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list new;
	size_t index;

	va_start(new, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(new, int));
		if (separator && index < n - 1)
		{
			printf("%s", separator);
		}
	}

	printf("\n");
	va_end(new);
}
