#include <stdio.h>

/**
 * main - entry point
 * @void: null
 *
 * Description: printing all possible combinations of two- digit numbers
 *
 * Return: always 0
 */
int main(void)
{
	int a = 0, b, count = 0;

	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			putchar(a / 10 + '0');
			putchar(a % 10 + '0');
			putchar(' ');
			putchar(b / 10 + '0');
			putchar(b % 10 + '0');
			count++;
			if (count < 4950)
			{
			putchar(',');
			putchar(' ');
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
