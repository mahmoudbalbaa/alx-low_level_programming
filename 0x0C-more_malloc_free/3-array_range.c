#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: minimal num
 * @max: maximum num
 * Return: NULL if min > max or arr if not
 */

int *array_range(int min, int max)
{
	int *arr, i;

	if (min > max)
		return (NULL);
	arr = malloc(sizeof(*arr) * ((max - min) + 1));
	if (arr == NULL)
		return (NULL);
	for (i = 0; min <= max; i++, min++)
		arr[i] = min;
	return (arr);
}
