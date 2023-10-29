#include "main.h"
/**
 * _isdigit - Check for a digit
 *
 * @c: Integer to be used
 *
 * Return: 1- Yes 0- No
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);

	return (0);
}
