#include "main.h"
#include <stdio.h>

/**
 * _strcat - a pointer to char function
 * @dest: a pointer to character
 * @src: a pointer to character
 * Description: function that concatenates two strings
 * Return: the value of dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j, len_d = 0, len_s = 0;

	for (i = 0; dest[i] != '\0'; i++)
		len_d++;
	for (j = 0; src[j] != '\0'; j++)
		len_s++;
	for (i = len_d, j = 0; j != len_s + 1; i++, j++)
	{
		dest[i] = src[j];
	}
	return (dest);
}
