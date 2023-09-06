#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - function that concatenates all the arguments of your program
 * @ac: num of args
 * @av: a poiter to string
 * Return: NULL if ac = 0 or av = x = NULL, or x if not
 */

char *argstostr(int ac, char **av)
{
	int c = 0, i, j, p = 0;
	char *x;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		for (j = 0; av[i][j] != '\0'; j++)
			c++;
	x = (char *) malloc(sizeof(char) * (c + ac + 1));
	if (x == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, p++)
			x[p] = av[i][j];
		x[p] = '\n';
		p++;
	}
	x[p] = '\0';
	return (x);
}
