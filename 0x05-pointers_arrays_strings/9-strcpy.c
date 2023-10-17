#include "main.h"

/**
 * *_strcpy - will copy the string pointed to by src
 * @src: pointer pointed to
 * @dest: buffer pointed to
 * Return: the pointer to dest
 */
char *_strcpy(char * dest, char *src)
{
	int j;
	int len;

	for (len = 0; src[len] != '\0'; len++)
	{
	}

	for (j = 0; j <= len; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}
