#include <stdio.h>
#include <stdlib.h>

/**
 * _atoi - convert a string to an integer
 * @s: a pointer to a char
 * Return: the value of x
 */

int _atoi(char *s)
{
	int x, min, digit, l, i;

	x = 0;
	min = 0;
	digit = 0;
	l = 0;
	for (i = 0; s[i] != '\0'; i++)
		l++;
	for (i = 0; i < l; i++)
	{
		if (s[i] == '-')
			min++;
		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (min % 2)
				digit = -digit;
			x = (x * 10) + digit;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
		}
	}
	return (x);
}
