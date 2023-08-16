#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 * @void: null
 * Return: void
 */
void times_table(void)
{
	int c = 0, r, n;

	while (c <= 9)
	{
		r = 0;
		while (r <= 9)
		{
			n = c * r;
			if (n <= 9)
			{
				_putchar(' ');
				_putchar(n % 10 + '0');
			}
			else
			{
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
			}
			if (r < 9)
			{
			_putchar(',');
			_putchar(' ');
			}
			r++;
		}
		_putchar('$');
		_putchar('\n');
		c++;
	}
}
