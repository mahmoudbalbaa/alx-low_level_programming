#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: holds the first string
 * @s2: holds the second string
 * Return: NULL if x equals NULL or x if not
 */

char *str_concat(char *s1, char *s2)
{
	int i, j = 0;
	char *x;

	x = (char *) malloc(strlen(s1) + strlen(s2) + 1);
	if (x == NULL)
		return (NULL);
	for (i = 0; (x[j] = s1[i]) != '\0'; j++, i++)
		;
	for (i = 0; (x[j] = s2[i]) != '\0'; j++, i++)
		;
	x[j] = '\0';
	return (x);

}
