#include "main.h"

/**
 * more_numbers - prints 10 times the numbers
 * from 0 to 14, followed by a new line
 * @void: null
 * Return: void
 */

void more_numbers(void)
{
	int n, i = 0;

	while (i <= 9)
	{
		n = 0;
		while (n <= 14)
		{
			if (n > 9 && n <= 14)
			{
				_putchar((n / 10) + '0');
			}
			_putchar((n % 10) + '0');
			n++;
		}
		_putchar('\n');
		i++;
	}
}
