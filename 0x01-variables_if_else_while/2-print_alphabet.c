#include <stdio.h>

/**
 * main - variable char is assigned as x = 'a'
 * WHILE x less than or equal 'z'
 *	Prints x
 *	Increment of x by 1
 * Return: always 0
 */
int main(void)
{
	char x = 'a';
	
	while (x <= 'z')
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
