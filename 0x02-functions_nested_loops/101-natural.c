#include <stdio.h>

/**
 * main - entry point
 * @void: null
 * Description: prints nums that are multiples of 3 or 5 and their sum
 * Return: always 0
 */
int main(void)
{
	int n = 1, sum = 0;
	int one, ten, hund, thou;

	while (n < 1024)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			putchar(n + '0');
			sum += n;
			putchar('\n');
		}
		n++;
	}
	thou = sum / 1000;
	hund = (sum % 1000) / 100;
	ten = (sum % 100) / 10;
	one = sum % 10;
	if (sum <= 9)
		putchar(one + '0');
	else if (sum > 9 && sum <= 99)
	{
		putchar(ten + '0');
		putchar(one + '0');
	}
	else if (sum > 99 && sum <= 999)
	{
		putchar(hund + '0');
		putchar(ten + '0');
		putchar(one + '0');
	}
	else if (sum > 999 && sum <= 9999)
	{
		putchar(thou + '0');
		putchar(hund + '0');
		putchar(ten + '0');
		putchar(one + '0');
	}
	putchar ('\n');
	return (0);
}
