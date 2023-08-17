#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: any character
 * Return: 1 for uppercase or 0 for any other character
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
