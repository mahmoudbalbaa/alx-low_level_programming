#include <stdio.h>

/**
 * main - entry point
 * @void: null
 *
 * Description: Prints from 000 to 999
 *
 * Return: always 0
 */
int main(void)
{
	int x = 0, y, z, count = 0;

	while (x <= 7)
	{
		y = x + 1;
		while (y <= 8)
		{
			z = y + 1;
			while (z <= 9)
			{
				putchar(x + '0');
				putchar(y + '0');
				putchar(z + '0');
				count++;
				if (count < 120)
				{
					putchar(',');
					putchar(' ');
				}
				z++;
			}
			y++;
		}
		x++;
	}
	putchar('\n');
	return (0);
}
