#include "main.h"
#include <stdio.h>

/**
 * _strncat - a pointer to char function
 * @dest: a pointer to character
 * @src: a pointer to character
 * @n: an integer
 * Description: function that concatenates two strings
 * Return: the value of dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j, len_d = 0;

	for (i = 0; dest[i] != '\0'; i++)
		len_d++;
	for (i = len_d, j = 0; j != n && src[i] != '\0'; i++, j++)
	{
		dest[i] = src[j];
	}
	dest[i + n] = '\0';
	return (dest);
}
