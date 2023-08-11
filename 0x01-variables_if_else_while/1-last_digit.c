#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assign variable int n
 * IF the last number of n greater than 5
 *	Prints "Last digit of n is greater than 5", followed by a new line
 * ELSE IF the last number of n equals 0
 *	Prints "Last digit of n is 0", followed by a new line
 * ELSE IF the last number of n less than 6 AND not equals 0
 *	Prints "Last digit of n is less than 6 and not 0", followed by a new line
 * Return: always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n % 10 > 5)
		printf("Last digit of %d is %d and is greater than 5\n"
				, n, n % 10);
	else if  (n % 10 == 0)
		printf("Last digit of %d is %d and is 0\n", n, n % 10);
	else if (n%10 < 6 && n % 10 != 0)
		printf("Last digit of %d is %d and is less than 6 " 
				"and not 0\n", n, n % 10);
	return (0);
}
