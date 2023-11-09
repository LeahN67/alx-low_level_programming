#include <stdio.h>
#include <stdarg.h>

/**
* sum_them_all - sum of all its parameters
* @n: n arguments
* Return: sum
*/

int sum_them_all(const unsigned int n, ...)
{
	int res = 0;
	unsigned int x;
	va_list arguments;

	if (n)
	{
		va_start(arguments, n);
		for (x = 0; x < n; x++)
		{
			res += va_arg(arguments, int);
		}
		va_end(arguments);
	}
	return (res);
}
