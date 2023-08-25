#include "main.h"
#include <stdio.h>

/**
 * cap_string - function that capitalizes all words of a string
 * @a: a pointer to a char
 * Return: the value of a
 */

char *cap_string(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] == ' ' || a[i] == '	' || a[i] == '\n'
			|| a[i] == ',' || a[i] == ';' || a[i] == '.'
			|| a[i] == '!' || a[i] == '?' || a[i] == '"'
			|| a[i] == '(' || a[i] == ')' || a[i] == '{'
			|| a[i] == '}')
		{
			if (a[i + 1] >= 'a' && a[i + 1] <= 'z')
				a[i + 1] -= 32;
		}
	}
	return (a);
}
