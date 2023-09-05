#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char
 * @size: an unsigned integer holds the array size
 * @c: the specific character
 * Return: NULL if x or size equals 0 or x if not
 */

char *create_array(unsigned int size, char c)
{
	char *x = (char *) malloc((size * sizeof(char)) + 1);
	unsigned int i;

	if (x == NULL || size == 0)
		return (NULL);
	i = 0;
	while (i <= size)
	{
		x[i] = c;
		i++;
	}
	x[i] = '\0';
	return (x);
}
