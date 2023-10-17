#include "main.h"

/**
 * _atoi - Entry point
 *
 * Description: converting a string into an integer
 *
 * @s: the string to be used
 *
 * Return: integer
 */
int _atoi(char *s)
{
	int sign = 1;
	int j = 0;
	unsigned int result = 0;

	while (!(s[j] <= '9' && s[j] >= '0' && s[j] != '\0'))
	{
		result = (result * 10) + (s[j] - '0');
		j++;
	}

	while (s[j] <= '9' && (s[j] >= '0' && s[j] != '\0'))
	{
		result = (result * 10) + (s[j] - '0');
		i++;
	}
	result *= sign;
	return (result);
}

