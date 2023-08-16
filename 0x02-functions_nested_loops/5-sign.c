#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: contains the number
 * Return: 1 for positive numbers or 0 for zero or -1 for negative numbers
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
