#include "main.h"

/**
 * _isalpha(int c) - checks for lowercase or uppercaser character
 *
 * @c:letter to be checked
 *
 * Return: Always 0
 */

int _islower(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
