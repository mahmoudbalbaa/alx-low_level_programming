#include "main.h"

/**
 * void function
 * Description: Prints the alphabits in lowercase
 * return: always void
 */
void print_alphabet(void)
{
	int a = 'a';
	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
	return;
}
