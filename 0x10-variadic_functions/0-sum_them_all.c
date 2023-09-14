#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - a function that returns the sum of all its parameters
 * @n: the num of parameters
 * Return: 0 if n = 0 or t if not
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ls_arg;
	int i, t = 0;

	if (n == 0)
		return (0);

	va_start(ls_arg, n);
	for (i = 0; i < n; i++)
		t += va_arg(ls_arg, int);
	va_end;

	return (t);
}
