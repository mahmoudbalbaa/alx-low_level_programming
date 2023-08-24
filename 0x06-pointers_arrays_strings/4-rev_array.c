#include "main.h"
#include <stdio.h>

/**
 * reverse_array - function that reverses
 * the content of an array of integers
 * @a: a pointer to an integer
 * @n: an integer
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, u;

	for (i = 0; i <= (n / 2); i++)
	{
		u = a[i];
		a[i] = a[(n - 1) - i];
		a[(n - 1) - i] = u;
	}
}
