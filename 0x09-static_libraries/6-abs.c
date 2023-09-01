#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @c: contains an integer
 * Return: always a
 */
int _abs(int c)
{
	int a;

	if (c >= 0)
		a = c;
	else
		a = c * -1;
	return (a);
}
