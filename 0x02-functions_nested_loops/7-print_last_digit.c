#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @x: contains a number
 * Return: always 0
 */
int print_last_digit(int x)
{
	int l = x % 10;

	if (x < 0)
		l *= -1;
	_putchar(l + '0');
	return (0);
}
