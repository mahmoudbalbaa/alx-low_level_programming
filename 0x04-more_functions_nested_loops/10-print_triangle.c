#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: any num
 * Return: void
 */

void print_triangle(int size)
{
	int s, t, l;

	if (size <= 0)
		_putchar('\n');
	else
		for (l = 1; l <= size; l++)
		{
			for (s = size - l; s >= 0; s--)
				_putchar(' ');
			for (t = l; t > 0; t--)
				_putchar('#');
			_putchar('\n');
		}
}
