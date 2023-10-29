#include "main.h"

/**
 * _abs - compute the absolute value of an integer
 *
 * @n: number to be checked
 *
 * Return: Alwais 0
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	return (n);
}
