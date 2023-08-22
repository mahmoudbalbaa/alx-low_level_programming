#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: a pointer to a char
 * return: null
 */

void puts_half(char *str)
{
	int i = 0, len;

	while (str[i] != '\0')
		i++;
	len = ((i - 1) / 2) + 1;
	for (i = len; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
