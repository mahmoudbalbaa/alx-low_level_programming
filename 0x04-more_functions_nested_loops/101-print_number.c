#include "main.h"

/**
 * pos_numbers - prints the positive integers
 * @x: any nums
 * Return: void
 */

void pos_numbers(int x)
{
	int one, ten, hund, thou;

	one = x % 10;
	ten = (x % 100) / 10;
	hund = (x % 1000) / 100;
	thou = (x % 10000) / 1000;
	if ((x >= 0) && (x <= 9))
		_putchar(one + '0');
	else if ((x > 9) && (x <= 99))
	{
		_putchar(ten + '0');
		_putchar(one + '0');
	}
	else if ((x > 99) && (x <= 999))
	{
		_putchar(hund + '0');
		_putchar(ten + '0');
		_putchar(one + '0');
	}
	else if ((x > 999) && (x <= 9999))
	{
		_putchar(thou + '0');
		_putchar(hund + '0');
		_putchar(ten + '0');
		_putchar(one + '0');
	}
}

/**
 * print_number - prints a givin integer
 * @n: any num
 * Return: void
 */

void print_number(int n)
{
	int one, ten, hund, thou;

	one = n % 10;
	ten = (n % 100) / 10;
	hund = (n % 1000) / 100;
	thou = (n % 10000) / 1000;
	if ((n < 0) && (n >= -9))
	{
		_putchar('-');
		_putchar((one * -1) + '0');
	}
	else if ((n < -9) && (n >= -99))
	{
		_putchar('-');
		_putchar((ten * -1) + '0');
		_putchar((one * -1) + '0');
	}
	else if ((n < -99) && (n >= -999))
	{
		_putchar('-');
		_putchar((hund * -1) + '0');
		_putchar((ten * -1) + '0');
		_putchar((one * -1) + '0');
	}
	else if ((n < -999) && (n >= -9999))
	{
		_putchar('-');
		_putchar((thou * -1) + '0');
		_putchar((hund * -1) + '0');
		_putchar((ten * -1) + '0');
		_putchar((one * -1) + '0');
	}
	else
		pos_numbers(n);
}
