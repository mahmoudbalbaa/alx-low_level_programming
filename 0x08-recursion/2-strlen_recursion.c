#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen_recursion - function that returns the length of a string
 * @s: a pointer to char
 * Return: the value of x
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}
