#include <stdio.h>

/**
 * main - Function that calculates largest prime number
 *
 * Return: 0 (SUccess)
 */


int main(void)
{
	long int a = 612852475143;
	long int b;

	for (b = 2; b < a; b++)
	{
		if (a % b == 0)
		{
			a = a / b;
		}
	}
	printf("%ld\n", b);
	return (0);
}
