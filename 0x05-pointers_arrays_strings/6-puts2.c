#include "main.h"

/**
 * puts2 - Entry point
 * Description: to print one character of 2 of a string
 * followed by new line
 *
 * @str: pointer of the string to print the characters from
 */
void puts2(char *str)
{
	int length;
	int i;

	length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	for (i = 0; i < length; i +=2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
