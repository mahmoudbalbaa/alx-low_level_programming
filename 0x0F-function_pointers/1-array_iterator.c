#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator - function that executes a function given
 * as a parameter on each element of an array
 * @array: a pointer to an int as an array
 * @size: size of the array
 * @action: a pointer to a specific func
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
		for (i = 0; i < size; i++)
			action(array[i]);
}
