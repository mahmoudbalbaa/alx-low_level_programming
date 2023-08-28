#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: a pointer to char
 * @accept: a pointer to char
 * Return: the value of x
 */

char *_strpbrk(char *s, char *accept)
{
	char *x = strpbrk(s, accept);

	return (x);
}
