#include <stdio.h>

/**
 * main - assigns int x = 0 in hexadecimal
 * while x less than or equals 'f'
 *	prints x
 *	increases x by 1
 * puts a new line at the end
 * Return: always 0
 */
int main(void)
{
	int x = '0';
	char z = 'a';

	while (x <= '9')
	{
		putchar(x);
		x++;
	}
	while (z <= 'f')
	{
		putchar(z);
		z++;
	}
	putchar('\n');
	return (0);
}
