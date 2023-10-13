#include "main.h"

/**
 * _isupper - checks for a digit 
 *
 * @c: int to be checked
 *
 * Return: 1 if c is an uppercase, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
