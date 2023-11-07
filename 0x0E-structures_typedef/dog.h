#ifndef DOG_H
#define DOG_H

/**
 * struct dog - new structure
 * @name: element1
 * @age: element2
 * @owner: element3
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
