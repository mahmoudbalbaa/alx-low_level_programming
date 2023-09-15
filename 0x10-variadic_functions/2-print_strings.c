#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings -  a function that prints strings, followed by a new line
 * @separator: a  string to be printed between the strings
 * @n: the number of strings passed to the function
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ls_s;
	unsigned int i;
	char *str;

	va_start(ls_s, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ls_s, char *);
		if (str != NULL)
			printf("%s", str);
		else
			printf("nil");

		if (separator != NULL && i != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ls_s);
}
