#include "main.h"

/**
 * _strcmp - compares 2 strings
 *
 * @s1: compare with s2
 *
 * @s2: compare with s1
 *
 * Return: 0 (Success)
 */
int _strcmp(char *s1, char *s2)
{
	int result;
	
	result = 0;

	while (*s1 == *s2 && *s1 != '\0')
	{
		s1++;
		s2++
	}
	if (s1 != s2)
		results = *s1 - *s2;

	return (result)
}
