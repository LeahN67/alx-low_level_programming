#include "main.h"

/**
 * print_most_numbers - function that prints the selected numbers,
 *followed by a new line
 */
void print_most_numbers(void)
{
	int c;

	for (c = 0; c < 10; c++)
	{
		if (c != 2 && c != 4)
		{
			_putchar(c + '0');
		}
	}

	_putchar('\n');
}
