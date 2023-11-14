#include "main.h"

/**
 * _islower -  checks for lowercase character
 * @c: contains the alphabet
 * Return: 1 for lowercase character or 0 for uppercase character
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
