#include <stdio.h>

/**
 * main - assigns int z = 0
 * While z less than or equals 9
 *	Prints z
 *	then Prints ','
 *	then Prints ' '
 *	increases z by 1
 * at the end puts new line
 * Return: always 0
 */
int main(void)
{
	int z = '0';

	while (z <= '9')
	{
		putchar(z);
		if (z != '9')
		{
			putchar(',');
			putchar(' ');
		}
		z++;
	}
	putchar('\n');
	return (0);
}
