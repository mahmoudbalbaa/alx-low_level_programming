#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strstr - function that locates a substring
 * @haystack: a pointer to char
 * @needle: a pointer to char
 * Return: the value of x
 */

char *_strstr(char *haystack, char *needle)
{
	char *x = strstr(haystack, needle);

	return (x);
}
