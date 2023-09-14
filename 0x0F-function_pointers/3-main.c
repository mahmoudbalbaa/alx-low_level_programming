#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that performs simple operations
 * @argc: an inter
 * @argv: a double pointer
 * Return: always 0
 */

int main(int argc, char **argv)
{
	int (*opr)(int, int);

	if (argc != 4)
	{
	printf("Error\n");
	exit(98);
	}
	opr = get_op_func(argv[2]);
	if (opr == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", opr(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
