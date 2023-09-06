#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the minimum number of
 * coins to make change for an amount of money
 * @argc: arg counter
 * @argv: a pointer to strings
 * Return: 1 if argc not equal 2 or 0 if not
 */

int main(int argc, char **argv)
{
	int n = 0, i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	if (i < 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	while (i)
	{
		if (i >= 25)
		{
			i -= 25;
			n++;
		}
		else if (i < 25 && i >= 10)
		{
			i -= 10;
			n++;
		}
		else if (i < 10 && i >= 5)
		{
			i -= 5;
			n++;
		}
		else if (i < 5 && i >= 2)
		{
			i -= 2;
			n++;
		}
		else
		{
			i--;
			n++;
		}
	}
	printf("%d\n", n);
	return (0);
}
