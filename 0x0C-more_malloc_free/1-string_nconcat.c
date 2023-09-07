#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: nums of bytes
 * Return: NULL if x equal NULL or x if not
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k;
	char *x;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	if (n >= j)
		n = j;
	x = malloc(sizeof(char) * (i + n + 1));
	if (x == NULL)
		return (NULL);
	for (k = 0; k < (i + n); k++)
		if (k < i)
			x[k] = s1[k];
		else
			x[k] = s2[k - i];
	x[k] = '\0';
	return (x);
}
