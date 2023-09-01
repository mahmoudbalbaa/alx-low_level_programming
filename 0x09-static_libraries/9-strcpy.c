#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcpy - copies the string
 * @dest: a pointer to a char
 * @src: a pointer to a char
 * Return: the new value of dest pointer
 */

char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
