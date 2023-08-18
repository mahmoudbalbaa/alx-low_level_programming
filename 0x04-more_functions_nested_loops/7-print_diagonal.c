#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: any num
 * Return: void
 */

void print_diagonal(int n)
{
	int b, s;

	for (s = 1; s <= n; s++)
	{
		for (b = 1; b <= s - 1; b++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
