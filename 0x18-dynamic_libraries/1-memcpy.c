#include "main.h"
#include <stdio.h>

/**
 * _memcpy - function that copies memory area
 * @dest: a pointer to char
 * @src: a pointer to char
 * @n: unsigned integer
 * Return: the value of dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
