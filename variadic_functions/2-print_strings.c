#include "variadic_functions.h"
/**
* print_strings - prints strings
* @separator: string to be printed between the strings
* @n: number of strings passed to the function
* return: no return
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list new;
	size_t index;
	char *str;

	va_start(new, n);

	for (index = 0; index < n; index++)
	{
		str = va_arg(new, char *);

		if (str)
		{
			printf("%s", str);
		}
		else
		{
			printf("(nil)");
		}

		if (index < n - 1 && separator)
		{
			printf("%s", separator);
		}
	}

	printf("\n");
	va_end(new);
}
