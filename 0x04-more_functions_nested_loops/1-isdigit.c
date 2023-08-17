#include "main.h"

/**
 * _isdigit -  checks for a digit (0 through 9)
 * @c: any num
 * Return: 1 for digits or 0 for any other character
 */
int _isdigit(int c)
{
	if (c <= '0' && c >= '9')
		return (1);
	else
		return (0);
}
