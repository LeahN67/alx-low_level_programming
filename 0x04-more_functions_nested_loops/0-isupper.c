#include "main.h"

/**
 * _isdigit - checks for a digit 
 *
 * @c: int to be checked
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
