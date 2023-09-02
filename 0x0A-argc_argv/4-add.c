#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that adds positive numbers
 * @argc: an integer
 * @argv: an array of strings
 * Return: 1 if argv is not num or 0 if not
 */

int main(int argc, char *argv[])
{
	int i, n, r = 0;
	char *find_ltr;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			find_ltr = argv[i];
			while (*find_ltr != 0)
			{
				if (*find_ltr < 47 || *find_ltr > 57)
				{
					printf("Error\n");
					return (1);
				}
				find_ltr++;
			}
			n = atoi(argv[i]);
			r += n;
		}
		printf("%d\n", r);
	}
	else
		printf("%d\n", 0);
	return (0);
}
