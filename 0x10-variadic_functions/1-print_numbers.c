#include "variadic_functions.h"

/**
 * print_numbers - prints numbers given as parameters
 * @separator: string to be printed b
 * @n: number of integers 
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	va_list args;

	va_start(args, n);

	for (x = 0; x < n; x++)
	{
		if (!separator)
			printf("%d", va_arg(args, int));
		else if (separator && x == 0)
			printf("%d", va_arg(args, int));
		else
			printf("%s%d", separator, va_arg(args, int));
	}

	va_end(args);

	printf("\n");
}
