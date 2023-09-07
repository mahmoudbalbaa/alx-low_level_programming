#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory
 * @b: the size
 * Return: x
 */

void *malloc_checked(unsigned int b)
{
	char *x;
		
	x = malloc(b);
	if (x == NULL)
		exit(98);
	return (x);
}
