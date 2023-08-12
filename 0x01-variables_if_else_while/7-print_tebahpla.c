#include <stdio.h>

/**
 * main - assign x = 'z' as char
 * While x greater than or equals 'a'
 *	Prints x
 *	increases x by 1
 * Puts a new line at the end
 * Return: always 0
 */
int main(void)
{
	char x = 'z';

	while (x >= 'a')
	{
		putchar(x);
		x--;
	}
	putchar('\n');
	return (0);
}
