#include "main.h"

/**
 * *_memset - function fills memory with a constant byte
 * @s: memory area 
 * @b: char to copy
 * @n: number of times to copy b
 *
 * Return: pointer to memory area 
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}

	return (s);
}
