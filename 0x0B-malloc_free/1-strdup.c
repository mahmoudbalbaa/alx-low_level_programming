#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter
 * @str: holds the origin string
 * Return: NULL if str or x equals NULL or x if not
 */

char *_strdup(char *str)
{
	int i, len;
	char *x;

	for (i = 0; str[i] != '\0'; i++)
		;
	len = i;
	x = (char *) malloc(len * sizeof(char));
	if (str == NULL || x == NULL)
		return (NULL);
	for (i = 0; x[i] != '\0' || str[i] != '\0'; i++)
		x[i] = str[i];
	x[i] = '\0';
	return (x);
}
