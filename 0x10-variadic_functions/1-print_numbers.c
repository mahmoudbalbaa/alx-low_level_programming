#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - a function that prints numbers, followed by a new line
 * @separator: a string to be printed between numbers
 * @n: a number of integers passed to the function
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ls_n;
	unsigned int i;

	va_start(ls_n, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ls_n, int));
		if (separator != NULL)
		{
			if (i != (n - 1))
				printf(", ");
		}
		else
			printf(" ");
	}
	printf("\n");
}
