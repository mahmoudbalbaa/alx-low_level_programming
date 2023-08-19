#include "main.h"

/**
 * print_number - Write a function that prints an integer with putchar
 * @n: This is a number to print
 *
 */
void print_number(int n)
{
	int n2, n1 = n;
	int d = 1;

	if (n < 0)
	{
		_putchar('-');
		n1 = n * -1;
	}
	n2 = n1;
	while (n2 > 9)
	{
		d *= 10;
		n2 = n2 / 10;
	}
	while (d >= 1)
	{
		n2 = n1 % d;
		n1 /= d;
		_putchar(n1 + '0');
		n1 = n2;
		d /= 10;
	}
}
