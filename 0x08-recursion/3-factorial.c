#include "main.h"

/**
 * factorial - funcction returns the factorial of a number
 * @n: number number whose factorial is to be returned
 *
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
