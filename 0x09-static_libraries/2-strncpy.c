#include "main.h"

/**
 * _strncpy - function copies a string
 * @dest: the destination string
 * @src: the source string
 * @n: number of bytes to be copied
 *
 * Return: pointer to the resultant string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;

	while (src[j] != '\0' && j < n)
	{
		dest[j] = src[j];
		j++;
	}

	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
