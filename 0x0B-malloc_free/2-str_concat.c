#include "main.h"

/**
 * str_concat - pointer concanates two strings
 * @s1: string one
 * @s2: string two
 * Return: concanated pointer
 */

char *str_concat(char *s1, char *s2)
{
	int s1_len = 0;
	int s2_len = 0;
	int x;
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (x = 0; s1[x] != '\0'; x++)
		s1_len++;
	for (x = 0; s2[x] != '\0'; x++)
		s2_len++;

	result = malloc(sizeof(char) * (s1_len + s2_len) + 1);

	if (result == NULL)
		return (NULL);

	for (x = 0; s1[x] != '\0'; x++)
		result[x] = s1[x];
	for (x = 0; s2[x] != '\0'; x++)
		result[s1_len + x] = s2[x];
	return (result);
}
