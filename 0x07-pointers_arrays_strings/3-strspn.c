#include "main.h"
#include <stdio.h>

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: a pointer to char
 * @accept: a pointer to char
 * Return: the value of count
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int j, i, count = 0;

	for (i = 0; (s[i] != '\0') && (s[i] != ' '); i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				count++;
		}
	}
	return (count);
}
