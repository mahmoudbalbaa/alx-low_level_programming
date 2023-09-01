#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers
 * @argc: an integer
 * @argv: an array of strings
 * Return: 0 if argc - 1 equals 2 or 1 if not
 */

int main(int argc, char *argv[])
{
	int n1, n2, r;

	if (argc - 1 != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		r = n1 * n2;
		printf("%d\n", r);
		return (0);
	}
}
