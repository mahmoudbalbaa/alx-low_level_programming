#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncpy - a pointer to char function
 * @dest: a pointer to character
 * @src: a pointer to character
 * @n: an integer
 * Description: function that copies a string
 * Return: the value of dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
