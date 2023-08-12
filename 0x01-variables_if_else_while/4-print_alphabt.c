#include <stdio.h>

/**
 * main - assign char as z = a
 * WHILE z less than or equal 'z'
 *	IF z not equals 'q' and not equals 'e'
 *		Prints z
 *	Prints a new line at the end
 * Return: always 0
 */
int main(void)
{
	char z = 'a';

	while (z <= 'z')
	{
		if (z != 'q' && z != 'e')
			putchar(z);
		z++;
	}
	putchar('\n');
	return (0);
}
