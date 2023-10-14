#include "main.h"

/**
 * print_square - Print square lines
 * @n : The number of lines 
 * Return: Void.
 */
void print_square(int n)
{
	int a;
	int b;

	for (b = 0; b < n; b++)
	{
		for (a = 0; a < n; a++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}

