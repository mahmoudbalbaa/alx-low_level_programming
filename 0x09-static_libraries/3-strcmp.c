#include "main.h"
#include <stdio.h>

/**
 * _strcmp - function that compares two strings
 * @s1: a pointer to char
 * @s2: a pointer to char
 * Return: r if strings are different or 0 if same
 */

int _strcmp(char *s1, char *s2)
{
	int i, j, r;

	for (i = 0, j = 0; s1[i] != '\0' && s2[j] != '\0'; i++, j++)
	{
		if (s1[i] != s2[j])
		{
			r = s1[i] - s2[j];
			return (r);
		}
	}
	return (0);
}
