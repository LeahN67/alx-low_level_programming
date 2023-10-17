#include<stdio.h>
#include<time.h>
#include <math.h>
#include <stdlib.h>

/**
 * main - Entry point.
 *
 * Description: printing password
 *
 * Return: 0
 */
int main(void)
{
	int x;
	int y;
	int random;
	int ascii = 2772;
	char password[100];
	time_t t;

	srand((int) time(&t));
	while (ascii > 126)
	{
		random = rand() % 126;
		password[x] = random;
		ascii -= random;
		x++;
	}
	if (ascii > 0)
		password[x] = ascii;
	else
	{
		x--;
	}

	for (y = 0; y <= x; y++)
	{
		printf("%c", password[y]);
	}
	return (0);
}
