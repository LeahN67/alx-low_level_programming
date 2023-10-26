#include "main.h"
/**
 * _pow_recursion - function that calculates the power
 * @x:int number
 * @y:int number
 * Return:int number
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y != 0)
		return (x * _pow_recursion(x, y - 1));

	else
	{
		return (1);
	}
}
