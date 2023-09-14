#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - adds 2 nums
 * @a: the first num
 * @b: the second num
 * Return: a + b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts 2 nums
 * @a: 1st num
 * @b: 2nd num
 * Return: a - b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies 2 nums
 * @a: 1st num
 * @b: 2nd num
 * Return: a * b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides 2 nums
 * @a: 1st num
 * @b: 2nd num
 * Return: a / b
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - gets modulo of a / b
 * @a: 1st num
 * @b: 2st num
 * Return: a % b
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
