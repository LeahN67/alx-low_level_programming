#include "main.h"

/**
 * print_alphabet_x10- fuction to check code
 *
 * Return - 0
 */

void print_alphabet_x10(void)
{
	int j;
	j=0;

	while (j < 10)
	{
		char word ='a';
		while (word <= 'z')
		{
			_putchar(word);
			word++;
		}
		_putchar('\n');
		j++;
	}
}
