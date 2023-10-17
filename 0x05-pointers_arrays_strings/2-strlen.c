#include "main.h"

/**
 * _strlen - Entry point
 *
 * Description: Function that returns the length of a string
 *
 * @s: to be evaluated
 *
 * Return:the length of the string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0' ; ++i);
	return (i);
}
