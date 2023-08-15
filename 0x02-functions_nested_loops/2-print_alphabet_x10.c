#include "main.h"

/**
 * print_alphabet_x10 - Prints alphabet 10 times
 *
 * return: void
 */
void print_alphabet_x10(void)
{
	int i = 1, a;

	while (i <= 10)
	{
		a = 'a';
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		i++;
	}
}
