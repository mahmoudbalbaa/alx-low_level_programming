#include "main.h"

/**
 * _isalpha - checks is the character is alphabetic or not
 * @c: contains the character
 * Return: 1 for alphabetic character or 0 for any other character
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
