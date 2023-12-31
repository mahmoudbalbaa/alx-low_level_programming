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
	int temp, counter;

	n = n - 1;
	counter = 0;
	while (counter <= n)
	{
		temp = a[counter];
		a[counter++] = a[n];
		a[n--] = temp;
	}
}
