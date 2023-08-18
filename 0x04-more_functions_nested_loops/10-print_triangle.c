#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: any num
 * Return: void
 */

void print_triangle(int size)
{
	int replay, count;

	if (size < 1)
	{
		_putchar('\n');
		return;
	}
	for (replay = 1; replay <= size; replay++)
	{
		for (count = size - replay; count > 0; count--)
			_putchar(' ');
		for (count = replay; count > 0; count--)
			_putchar('#');
		_putchar('\n');
	}
}
