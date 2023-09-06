#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * strtow - function that splits a string into words
 * @str: a string
 * Return: NULL str equals NULL or "", or x if not
 */

char **strtow(char *str)
{
	int i, j, p = 0, w = 0;
	char **x;

	if (str == NULL || *str == '\0' || str[1] == '\0')
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		if ((str[i] != ' ') && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			w++;
	x = (char **) malloc(sizeof(char *) * (w + 1));
	if (x == NULL)
		return (NULL);
	for (i = 0; i < w; i++)
	{
		while (str[p] == ' ')
			p++;
		for (j = 0; str[p] != ' ' && str[p] != '\0'; j++, p++)
			;
		x[i] = (char *) malloc(sizeof(char) * (j + 1));
		if (x[i] == NULL)
			return (NULL);
		strncpy(x[i], &str[p - j], j);
		x[i][j] = '\0';
	}
	x[w] = NULL;
	return (x);
}
