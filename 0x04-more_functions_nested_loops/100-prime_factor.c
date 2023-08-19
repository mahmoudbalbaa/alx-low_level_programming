#include <stdio.h>

/**
 * main - entry point
 * Description: program that finds and prints
 * the largest prime factor of the number 612852475143, followed by a new line
 *
 * Return: always 0
 */

int main(void)
{
	long int n = 612852475143;
	int i, v;

	for (i = 2; i <= n; i++)
	{
		if (n % i == 0)
		{
			n = n / i;
			v = i;
		}
	}
	printf("%d\n", v);
	return (0);
}
