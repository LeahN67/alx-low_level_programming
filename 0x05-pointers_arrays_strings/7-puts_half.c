#include "main.h"

/**
 * puts_half - Entry point
 *
 * Description: to print half of a string
 * followed by new line
 *
 * @str: pointer of a string to be printed
 */
void puts_half(char *str)
{
	int length;
	int n;
	int i;

	length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2 == 0)
	{
		for (i = len / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	else if (length % 2)
	{
		for (n = (len - 1) / 2; n < len - 1; n++)
		{
			_putchar(str[n + 1]);
		}
	}
	_putchar('\n');
}

