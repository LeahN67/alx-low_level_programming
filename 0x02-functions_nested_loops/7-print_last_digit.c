#include "main.h"

/**
 * print_last_digit - prints the last digit in a number
 *
 * @z: number to extract the last digit from
 *
 * Return: Always 0 
 */
int print_last_digit(int z)
{
	int i;

	if (z < 0)
		z = -z;

	i = z % 10;

	if (i < 0)
		i = -i;

	_putchar(i + '0');
	return (i);
}
