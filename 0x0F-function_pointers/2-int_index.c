#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * int_index - function that searches for an integer
 * @array: a pointer to an int as an array
 * @size: size of the array
 * @cmp: a pointer to func that compare the value
 * Return: -1 if no elem matches or i if not
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, x;

	if (size <= 0)
		return (-1);
	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			x = cmp(array[i]);
			if (x != 0)
				return (i);
		}
	}
	return (-1);
}
