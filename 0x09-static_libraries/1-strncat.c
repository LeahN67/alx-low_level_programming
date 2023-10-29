#include "main.h"

/**
 * _strncat - function concatenates n bytes from a string to another one
 *
 * @dest: the destination string
 *
 * @src: the source string
 *
 * @n: the number of bytes of str to concatenate
 *
 * Return: pointer to resultant string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int x;
	int y;

	x = 0;
	y = 0;

	while (dest[x] != '\0')
		x++;
	while (src[y] != '\0' && y < n)
	{
		dest[x] = src[y];
		x++;
		y++;
	}

	dest[x] = '\0';

	return (dest);
}
