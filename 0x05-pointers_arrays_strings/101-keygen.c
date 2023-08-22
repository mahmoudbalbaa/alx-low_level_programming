#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 * @void: null
 * description:generates random valid passwords for the program 101-crackme
 *
 * Return: always 0
 */

int main(void)
{
	char pass[100];
	int i;

	srand(time(0));
	for (i = 0; i < 100; i++)
	{
		pass[i] = rand() % 94 + 33;
	}
	printf("%s\n", pass);
	return (0);
}
