#include "variadic_functions.h"
/**
 * print_all - prints everything
 * @format: format of the string to be printed
 */

void print_all(const char * const format, ...)
{
	size_t index;
	va_list args;
	int flag;
	char *s;

	va_start(args, format);
	index = 0;
	while (format && format[index])
	{
		flag = 0;
		switch (format[index])
		{
			case 'c':
			printf("%c", va_arg(args, int));
			flag = 1;
			break;
			case 'i':
			printf("%d", va_arg(args, int));
			flag = 1;
			break;
			case 'f':
			printf("%f", va_arg(args, double));
			flag = 1;
			break;
			case 's':
			s = va_arg(args, char *);
			if (!s)
			s = "(nil)";
			printf("%s", s);
			flag = 1;
			break;
		}
		if (flag == 1 && format[index + 1])
		printf(", ");
		index++;
	}

	printf("\n");
	va_end(args);
}
