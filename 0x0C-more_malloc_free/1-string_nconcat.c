#include "main.h"

/**
 * string_nconcat - concatenates 2 strings
 * @s1: first string to be concatenated
 * @s2: second string to be concatenated
 * @n: bytes of s2
 * Return: pointer to the new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x;
	unsigned int s1_len = 0;
	unsigned int s2_len = 0;
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (x = 0; s1[x] != '\0'; x++)
		s1_len++;
	for (x = 0; s2[x] != '\0'; x++)
		s2_len++;

	result = malloc(sizeof(char) * (s1_len + n) + 1);
	if (result == NULL)
		return (NULL);
	if (n >= s2_len)
	{
		for (x = 0; s1[x] != '\0'; x++)
			result[x] = s1[x];
		for (x = 0; s2[x] != '\0'; x++)
			result[s1_len + x] = s2[x];
		result[s1_len + x] = '\0';
	}
	else
	{
		for (x = 0; s1[x] != '\0'; x++)
			result[x] = s1[x];
		for (x = 0; x < n; x++)
			result[s1_len + x] = s2[x];
		result[s1_len + x] = '\0';
	}
	return (result);


}

