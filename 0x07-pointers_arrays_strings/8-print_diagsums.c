#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of
 * the two diagonals of a square matrix of integers
 * @a: a pointer to an int
 * @size: an int
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, j, k, rsum, lsum;

	rsum = lsum = 0;
	j = 0, k = size - 1;
	for (i = 0; i < size; ++i, j += size + 1, k += size - 1)
	{
		lsum += *(a + j);
		rsum += *(a + k);
	}
	printf("%d, %d\n", lsum, rsum);
}
