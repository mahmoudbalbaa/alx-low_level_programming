#include <stdio.h>

/**
 * main - assign an int variable i =0
 * While i less than or equals 9
 *	Prints i
 *	increase by 1
 * Puts a new line after that
 * Return: always 0
 */
int main(void)
{
	char i = '0';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
