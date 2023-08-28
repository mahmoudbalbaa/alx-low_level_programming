#include "main.h"
#include <stdio.h>

/**
 * _strchr - function that locates a character in a string
 * @s: a pointer to char
 * @c: a character variable
 * Return: a pointer to the first occurrence of
 * the character c in the string s, or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	char *x;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			x = &s[i];
			return (x);
		}
	}
	return (NULL);
}
