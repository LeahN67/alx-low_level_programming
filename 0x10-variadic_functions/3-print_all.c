#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* print_all - print char, integer, float and string
* @format: format
*/
void print_all(const char * const format, ...)
{
	va_list list;
	unsigned int y = 0, start = 0;
	char *p;

	va_start(list, format);
	while (format && format[y] != '\0')
	{
		switch (format[y])
		{ case 'c':
			switch (start)
			{ case 1: printf(", "); }
			start = 1;
			printf("%c", va_arg(list, int));
			break;
			case 'x':
			switch (start)
			{ case 1: printf(", "); }
			start = 1;
			printf("%x", va_arg(list, int));
			break;
		case 'f':
			switch (start)
			{ case 1: printf(", "); }
			start = 1;
			printf("%f", va_arg(list, double));
			break;
		case's':
			switch (start)
			{ case 1: printf(", "); }
			start = 1;
			p = va_arg(list, char*);
			if (p)
			{ printf("%s", p);
			break; }
			printf("%p", p);
			break; }
		y++;
	}
	printf("\n");
	va_end(list);
}
