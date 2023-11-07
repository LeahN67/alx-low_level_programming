#include <stdlib.h>
#include "dog.h"

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: NULL if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggie;
	int name_d = 0, own_d = 0;

	if (name != NULL && owner != NULL)
	{
		name_d = _strlen(name) + 1;
		own_d = _strlen(owner) + 1;
		doggie = malloc(sizeof(dog_t));

		if (doggie == NULL)
			return (NULL);

		doggie->name = malloc(sizeof(char) * name_d);

		if (doggie->name == NULL)
		{
			free(doggie);
			return (NULL);
		}

		doggie->owner = malloc(sizeof(char) * own_d);

		if (doggie->owner == NULL)
		{
			free(doggie->name);
			free(doggie);
			return (NULL);
		}

		doggie->name = _strcpy(doggie->name, name);
		doggie->owner = _strcpy(doggie->owner, owner);
		doggie->age = age;
	}

	return (doggie);
}

/**
 * _strlen - Returns the length of a str
 * @s: String to count
 *
 * Return: String length
 */
int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}

	return (c);
}

/**
 * _strcpy - Copy a string
 * @dest: Destination value
 * @src: Source value
 * Return: the pointer
 */
char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0; src[x] != '\0'; x++)
	{
		dest[x] = src[x];
	}

	dest[x++] = '\0';

	return (dest);
