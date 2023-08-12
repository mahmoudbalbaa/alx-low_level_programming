#include <stdio.h>

/**
 * main - assigned variable int x = 0
 * While x less than or equals 9
 *	Prints x
 *	increase x by 1
 * Prints a new line
 * Return: always 0
 */
int main(void)
{
	int x = 0;

	while (x <= 9)
	{
		printf("%d", x);
		x++;
	}
	printf("\n");
	return (0);
}
