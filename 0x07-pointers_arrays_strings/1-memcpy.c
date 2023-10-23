#include "main.h"

/**
 * _memcpy - function copies memory area
 * @dest: pointer to char 
 * @src: pointer to char 
 * @n: size
 * Return: *dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}
