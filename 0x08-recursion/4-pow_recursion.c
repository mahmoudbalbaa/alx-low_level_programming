#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - function that returns
 *the value of x raised to the power of y
 * @x: an integer
 * @y: an integer
 * Return: -1 if y < 0 or 0 if y = 0 or the value of x
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	 return (x * _pow_recursion(x, y - 1));
}
