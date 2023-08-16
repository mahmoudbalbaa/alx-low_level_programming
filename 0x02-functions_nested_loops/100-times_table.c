#include "main.h"

/**
 * nums_spaces - prints the number, spaces, and commas
 * @c: num of columns
 * @res: r * c
 * @ten: contains the ten of res
 * @one: contains the one of res
 * @hund: contains the hundres of res
 * Return: void
 */
void nums_spaces(int c, int res, int ten, int one, int hund)
{
	if (c == 0)
	{
	_putchar(res + '0');
	}
	else if (res <= 9)
	{
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
	_putchar(' ');
	_putchar(res + '0');
	}
	else if (res > 9 && res <= 99)
	{
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
	_putchar(ten + '0');
	_putchar(one + '0');
	}
	else if (res > 99 && res <= 999)
	{
	_putchar(',');
	_putchar(' ');
	_putchar(hund + '0');
	_putchar(ten + '0');
	_putchar(one + '0');
	}
}

/**
 * print_times_table -  prints the n times table, starting with 0
 * @n: contains an intger
 * Return: void
 */

void print_times_table(int n)
{
	int r = 0, c, res, one, ten, hund;

	if (n <= 15 && n >= 0)
		while (r <= n)
		{
			c = 0;
			while (c <= n)
			{
				res = r * c;
				hund = res / 100;
				ten = (res % 100) / 10;
				one = res % 10;
				nums_spaces(c, res, ten, one, hund);
				c++;
			}
			_putchar('\n');
			r++;
		}
}
