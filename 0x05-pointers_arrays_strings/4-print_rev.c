#include "main.h"

/**
 * print_rev - Entry point
 * Description: prints a string in reverse
 * @s: pointer of the string to be printed
 */
void print_rev(char *s)
{
	int x, y, len;

	i = 0;

	while (s[x] != '\0')
	{
		x++;
	}

	len = x;

	for (y = len - 1; y >= 0; y--)
	{
		_putchar(s[y]);
	}
	_putchar('\n');
}
