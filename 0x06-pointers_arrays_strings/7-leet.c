#include "main.h"

/**
 * leet - encodes a string 
 * @s: string to be encoded
 *
 * Return: the resultant string;
 */
char *leet(char *s)
{
	int x, y;

	char *i = "aAeEoOtTlL";
	char *j = "4433007711";

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if (s[x] == i[y])
			{
				s[x] = j[y];
			}
		}
	}

	return (s);
}
