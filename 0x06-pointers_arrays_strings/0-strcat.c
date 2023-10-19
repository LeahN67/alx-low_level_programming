#include "main.h"

/**
 * _strcat(char *dest, char *src)
 *
 * @dest: string to be appended
 *
 * @src: string to be added
 *
 * Return:pointer to resultant string
 */
char *_strcat(char *dest, char *src)
{
	int x;
	int y;

	x = 0;
	y = 0;
		
	while (dest[x] != '\0')
		x++;

	while (src[y] !='\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';

	return (dest);
}