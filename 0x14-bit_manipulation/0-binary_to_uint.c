#include "main.h"

/**
 * binary_to_uint -  function that converts a binary number to an unsigned int
 * @b: a string
 * Return: 0 if b is NULL or deci if not
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int deci = 0, base = 1;
	int len, i;

	if (!b)
		return (0);

	for (len = 0; b[len] != '\0'; len++)
		;

	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);

		deci += (b[i] - '0') * base;
		base *= 2;
	}

	return (deci);
}
