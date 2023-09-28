#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @n: num
 * @index: index num
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > 63)
		return (-1);

	if (*n == 0 && index <= 63)
		return (1);

	i = 1 << index;

	*n = (*n ^ i);

	return (1);
}
