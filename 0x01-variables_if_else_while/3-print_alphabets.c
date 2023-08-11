#include <stdio.h>

/**
 * main - variables char are assigned as a = 'a', b = 'A'
 * WHILE a less than or equals z
 *	Prints a
 *	increase a by 1
 * WHILE b less than or equals Z
 *	Prints b
 *	increase b by 1
 * Then Prints a new line
 * Return: always 0
 */
int main(void)
{
	char a = 'a', b = 'A';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	while (b <= 'Z')
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
