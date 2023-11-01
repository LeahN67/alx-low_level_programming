#include "main.h"

/**
 * _strdup - returns a ponter to a new string
 * @str: copy of the new string
 * Return: pointer to the duplicated string
 */

char *_strdup(char *str)
{
	char *str_copy;
	int x;
	int cnt = 0;

	if (str == NULL)
		return (NULL);

	for (x = 0; str[x] != '\0'; x++)
		cnt++;

	str_copy = malloc(sizeof(char) * cnt + 1);

	if (str_copy == NULL)
		return (NULL);
	for (x = 0; str[x] != '\0'; x++)
		str_copy[x] = str[x];

	return (str_copy);
}
